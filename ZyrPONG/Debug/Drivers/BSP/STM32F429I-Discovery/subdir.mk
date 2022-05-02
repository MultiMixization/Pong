################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/kolor/STM32CubeIDE/workspace_1.9.0/LTDC_Display_2Layers/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.c \
../Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_eeprom.c \
../Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_gyroscope.c \
../Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_lcd.c \
../Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_sdram.c 

C_DEPS += \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.d \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_eeprom.d \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_gyroscope.d \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_lcd.d \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_sdram.d 

OBJS += \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.o \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_eeprom.o \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_gyroscope.o \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_lcd.o \
./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_sdram.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.o: C:/Users/kolor/STM32CubeIDE/workspace_1.9.0/LTDC_Display_2Layers/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.c Drivers/BSP/STM32F429I-Discovery/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu18 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32F429I-Discovery/%.o Drivers/BSP/STM32F429I-Discovery/%.su: ../Drivers/BSP/STM32F429I-Discovery/%.c Drivers/BSP/STM32F429I-Discovery/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu18 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-STM32F429I-2d-Discovery

clean-Drivers-2f-BSP-2f-STM32F429I-2d-Discovery:
	-$(RM) ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.d ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.o ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.su ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_eeprom.d ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_eeprom.o ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_eeprom.su ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_gyroscope.d ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_gyroscope.o ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_gyroscope.su ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_lcd.d ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_lcd.o ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_lcd.su ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_sdram.d ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_sdram.o ./Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_sdram.su

.PHONY: clean-Drivers-2f-BSP-2f-STM32F429I-2d-Discovery

