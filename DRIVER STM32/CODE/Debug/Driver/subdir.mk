################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Driver/Driver.c \
../Driver/Uart_handle.c 

OBJS += \
./Driver/Driver.o \
./Driver/Uart_handle.o 

C_DEPS += \
./Driver/Driver.d \
./Driver/Uart_handle.d 


# Each subdirectory must supply rules for building sources it contributes
Driver/%.o Driver/%.su Driver/%.cyclo: ../Driver/%.c Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Driver

clean-Driver:
	-$(RM) ./Driver/Driver.cyclo ./Driver/Driver.d ./Driver/Driver.o ./Driver/Driver.su ./Driver/Uart_handle.cyclo ./Driver/Uart_handle.d ./Driver/Uart_handle.o ./Driver/Uart_handle.su

.PHONY: clean-Driver

