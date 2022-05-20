#include "define/hdr_special_registers.h"

.text
.balign 2
.syntax unified
.thumb
.thumb_func
.global Reset_Handler

Reset_Handler:

/*
 * Aktualnie nie potrzebujemy obslugi process stacka i thread mode. Zajmuje sie
 * tym bezposrednio implementacja FreeRTOSa. Dlatego w skrypcie linkera rozmiar
 * PSP jest ustawiony na 0.
 */

#if __process_stack_size > 0
	ldr		r0, =__process_stack_end
	msr		PSP, r0
	movs	r0, #CONTROL_ALTERNATE_STACK
	msr		CONTROL, r0
	isb
#endif /* __process_stack_size > 0 */

/*
 * Przejscie do funkcji inicjalizacyjnej low_level_init_0 dzialajacej przed
 * inicjalizacja sekcji data i bss.
 */
	ldr		r0, =low_level_init_0
	blx		r0

/*
 * Inicjalizacja sekcji ram zerami.
 */
	movs	r0, #0
	ldr		r1, =__ram_start
	ldr		r2, =__ram_end

1:	cmp		r1, r2
	itt		lo
	strlo	r0, [r1], #4
	blo		1b


/*
 * Inicjalizacja sekcji aux zerami.
 */
	movs	r0, #0
	ldr		r1, =__aux_ram_start
	ldr		r2, =__aux_ram_end

1:	cmp		r1, r2
	itt		lo
	strlo	r0, [r1], #4
	blo		1b

/*
 * Inicjalizacja sekcji ccm zerami.
 */
	movs	r0, #0
	ldr		r1, =__ccm_ram_start
	ldr		r2, =__ccm_ram_end

1:	cmp		r1, r2
	itt		lo
	strlo	r0, [r1], #4
	blo		1b

/*
 * Inicjalizacja sekcji data wartosciami poczatkowymi.
 */
	ldr		r1, =__data_init_start
    ldr		r2, =__data_start
    ldr		r3, =__data_end

1:	cmp		r2, r3
	ittt	lo
	ldrlo	r0, [r1], #4
	strlo	r0, [r2], #4
	blo		1b

/*
 * Konstruktory C++ dla obiektow globalnych i statycznych.
 */
#ifdef __USES_CXX
	ldr		r0, =__libc_init_array
	blx		r0
#endif

/*
 * Przejscie do funkcji inicjalizacyjnej low_level_init_1 dzialajacej po
 * inicjalizacji sekcji data i bss.
 */
	ldr		r0, =low_level_init_1
	blx		r0

/*
 * Przejscie do glownej aplikacji.
 */
	ldr		r0, =main
	blx		r0

/*
 * Destruktory C++ dla obiektow globalnych i statycznych.
 */
#ifdef __USES_CXX
	ldr		r0, =__libc_fini_array
	blx		r0
#endif

/*
 * Po dojsciu do konca programu (wyjscie z funkcji main), nieskonczona petla.
 */
	b		.

/*
 * Jezeli funkcja low_level_init_0 lub low_level_init_1 nie jest wykorzystywana,
 * wykonuje sie pusta funkcja __default_low_level_init.
 */
.text
.balign 2
.syntax unified
.thumb
.thumb_func
.global __default_low_level_init

__default_low_level_init:
	bx		lr

.weak	low_level_init_0
.global	low_level_init_0
.set	low_level_init_0, __default_low_level_init

.weak	low_level_init_1
.global	low_level_init_1
.set	low_level_init_1, __default_low_level_init
