################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Button\ Driver/Button.c 

OBJS += \
./HAL/Button\ Driver/Button.o 

C_DEPS += \
./HAL/Button\ Driver/Button.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Button\ Driver/Button.o: ../HAL/Button\ Driver/Button.c HAL/Button\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"HAL/Button Driver/Button.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


