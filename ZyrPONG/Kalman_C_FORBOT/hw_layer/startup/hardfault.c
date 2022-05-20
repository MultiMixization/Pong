#include "platform_specific.h"

/* Funkcja z atrybutem naked, zeby z asemblera obsluzyc stack */
__attribute__((naked))
void HardFault_Handler(void)
{
   /*
    * Odczyt wlasciwego stack pointera w zaleznosci od trybu pracy rdzenia.
    * Nastepnie funkcja przechodzi do wlasciwej obslugi hardfaulta.
    */
   __asm( ".syntax unified\n"
            "MOVS   R0, #4  \n"
            "MOV    R1, LR  \n"
            "TST    R0, R1  \n"
            "BEQ    _MSP    \n"
            "MRS    R0, PSP \n"
            "B      HardFault_HandlerC      \n"
            "_MSP:  \n"
            "MRS    R0, MSP \n"
            "B      HardFault_HandlerC      \n"
            ".syntax divided\n");
}

void HardFault_HandlerC(unsigned long *hardfault_args)
{
   /*
    * Funkcja sczytuje ze stacka wartosci rejestrow rdzenia ulatwiajace
    * znalezienie przyczyny hardfaulta.
    */

   __attribute__((unused)) volatile unsigned long stacked_r0;
   __attribute__((unused)) volatile unsigned long stacked_r1;
   __attribute__((unused)) volatile unsigned long stacked_r2;
   __attribute__((unused)) volatile unsigned long stacked_r3;
   __attribute__((unused)) volatile unsigned long stacked_r12;
   __attribute__((unused)) volatile unsigned long stacked_lr;
   __attribute__((unused)) volatile unsigned long stacked_pc;
   __attribute__((unused)) volatile unsigned long stacked_psr;
   __attribute__((unused)) volatile unsigned long _CFSR;
   __attribute__((unused)) volatile unsigned long _HFSR;
   __attribute__((unused)) volatile unsigned long _DFSR;
   __attribute__((unused)) volatile unsigned long _AFSR;
   __attribute__((unused)) volatile unsigned long _BFAR;
   __attribute__((unused)) volatile unsigned long _MMAR;

   stacked_r0 = ((unsigned long) hardfault_args[0]);
   stacked_r1 = ((unsigned long) hardfault_args[1]);
   stacked_r2 = ((unsigned long) hardfault_args[2]);
   stacked_r3 = ((unsigned long) hardfault_args[3]);
   stacked_r12 = ((unsigned long) hardfault_args[4]);
   stacked_lr = ((unsigned long) hardfault_args[5]);
   stacked_pc = ((unsigned long) hardfault_args[6]);
   stacked_psr = ((unsigned long) hardfault_args[7]);

   _CFSR = (*((volatile unsigned long *) (0xE000ED28)));
   _HFSR = (*((volatile unsigned long *) (0xE000ED2C)));
   _DFSR = (*((volatile unsigned long *) (0xE000ED30)));
   _AFSR = (*((volatile unsigned long *) (0xE000ED3C)));

   _MMAR = (*((volatile unsigned long *) (0xE000ED34)));
   _BFAR = (*((volatile unsigned long *) (0xE000ED38)));

   NVIC_SystemReset();
}
