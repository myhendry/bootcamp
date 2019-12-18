################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cat.cpp \
../src/Classes.cpp \
../src/Dog.cpp \
../src/Employee.cpp \
../src/Head.cpp \
../src/Person.cpp \
../src/Student.cpp \
../src/Teacher.cpp \
../src/Zebra.cpp 

OBJS += \
./src/Cat.o \
./src/Classes.o \
./src/Dog.o \
./src/Employee.o \
./src/Head.o \
./src/Person.o \
./src/Student.o \
./src/Teacher.o \
./src/Zebra.o 

CPP_DEPS += \
./src/Cat.d \
./src/Classes.d \
./src/Dog.d \
./src/Employee.d \
./src/Head.d \
./src/Person.d \
./src/Student.d \
./src/Teacher.d \
./src/Zebra.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


