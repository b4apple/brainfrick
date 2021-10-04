#include "constants.h" 
#include "utils.h"
#include <stdio.h>

//The main function 
int main(int argc, char const *argv[]) {
	//Due to the pattern of arguments accepted, there has 
	//to be a minimum of 2 arguments (executable name then file name)
	//and a maximum of 3 arguments (executable name file name and then backend choice).
	//This leads to the conclusion that having 1 argument or 4 arguments is totally out 
	//of bounds. Hence this check eliminates the scenario of having invalid number of
	//arguments.
	if (argc == 1 || argc > 4) {
		printf(BF_USAGE_TXT);
		exit(BF_EXIT_ON_RUNTIME_ERROR);
	}
	exit(BF_EXIT_ON_SUCCESS);
}