################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cola.cpp \
../src/Nodo.cpp \
../src/cola\ de\ char.cpp 

OBJS += \
./src/Cola.o \
./src/Nodo.o \
./src/cola\ de\ char.o 

CPP_DEPS += \
./src/Cola.d \
./src/Nodo.d \
./src/cola\ de\ char.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/cola\ de\ char.o: ../src/cola\ de\ char.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cola de char.d" -MT"src/cola\ de\ char.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


