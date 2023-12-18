#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "str_fun.h"

#define EXIT "exit"

int main() {
	char input[100];
	int temp;

	//console input + commandline exe;
	printf("> ");
	fgets(input, sizeof(input), stdin);
	printf("%i", strcmp(EXIT, input));
	temp = strcmp(EXIT, input);
	while(temp != -10){
		printf("> ");
		fgets(input, sizeof(input), stdin);
		temp = strcmp(EXIT, input);
		if(input[0] == '.') {
			char command[100];
			substr(input, command, 1, strlen(input) - 1);
			system(command);
		}
	}	 

	printf("\n");
	return 0;
}