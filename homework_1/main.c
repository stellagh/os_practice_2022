#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "print_utilities.h"

int main(int argc, char** argv){
	char* message = "Hello World!";
	print_string(message,strlen(message));
	print_integer(42);
	print_double(3.14);
	return 0;
}
