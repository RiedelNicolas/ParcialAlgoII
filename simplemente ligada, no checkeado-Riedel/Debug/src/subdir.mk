################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Lista.cpp \
../src/Nodo.cpp \
../src/Simplemente\ Ligada.cpp 

OBJS += \
./src/Lista.o \
./src/Nodo.o \
./src/Simplemente\ Ligada.o 

CPP_DEPS += \
./src/Lista.d \
./src/Nodo.d \
./src/Simplemente\ Ligada.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Simplemente\ Ligada.o: ../src/Simplemente\ Ligada.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Simplemente Ligada.d" -MT"src/Simplemente\ Ligada.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


