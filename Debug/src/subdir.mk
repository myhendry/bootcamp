################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cat.cpp \
../src/Classes.cpp \
../src/Dog.cpp \
../src/Head.cpp \
../src/Person.cpp \
../src/Zebra.cpp 

OBJS += \
./src/Cat.o \
./src/Classes.o \
./src/Dog.o \
./src/Head.o \
./src/Person.o \
./src/Zebra.o 

CPP_DEPS += \
./src/Cat.d \
./src/Classes.d \
./src/Dog.d \
./src/Head.d \
./src/Person.d \
./src/Zebra.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


