################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Driver_step/Driver_step.c \
../Driver_step/Uart_handle.c 

OBJS += \
./Driver_step/Driver_step.o \
./Driver_step/Uart_handle.o 

C_DEPS += \
./Driver_step/Driver_step.d \
./Driver_step/Uart_handle.d 


# Each subdirectory must supply rules for building sources it contributes
Driver_step/%.o Driver_step/%.su Driver_step/%.cyclo: ../Driver_step/%.c Driver_step/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Driver_step

clean-Driver_step:
	-$(RM) ./Driver_step/Driver_step.cyclo ./Driver_step/Driver_step.d ./Driver_step/Driver_step.o ./Driver_step/Driver_step.su ./Driver_step/Uart_handle.cyclo ./Driver_step/Uart_handle.d ./Driver_step/Uart_handle.o ./Driver_step/Uart_handle.su

.PHONY: clean-Driver_step

