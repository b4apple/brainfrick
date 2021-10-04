#include "constants.h" 
#include "utils.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
	if (argc == 1 || argc > 4) {
		printf(BF_USAGE_TXT);
		exit(BF_EXIT_ON_RUNTIME_ERROR);
	}
	exit(BF_EXIT_ON_SUCCESS);
}