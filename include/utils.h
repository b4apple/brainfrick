//utils.h
//Copyright 2021-2022 Aritro Shome
//-==========================================================================
#pragma once
#include <stdint.h>
#include<stdio.h>
#include<stdlib.h>

//The exit function exits with the specified exit code as per defined in constants.h
//It also used the exit function from the C standard library to perform graceful 
//shutdown of the program
void exit(int exit_code) {
	printf("The Brainfrick Compiler exits with a code of %d\n", exit_code);
	exit(exit_code);
}