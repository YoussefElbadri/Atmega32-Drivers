################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LED\ Driver/LED.c 

OBJS += \
./HAL/LED\ Driver/LED.o 

C_DEPS += \
./HAL/LED\ Driver/LED.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LED\ Driver/LED.o: ../HAL/LED\ Driver/LED.c HAL/LED\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"HAL/LED Driver/LED.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


