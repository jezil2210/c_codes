#include <stdio.h>

int strlenString(char *str);

int main(int argc, char *argv[]){
	
	if (argc<2){
	    printf("Uso: %s string\n", argv[0]);
	    return 0;
	}
	printf("A string tem %d caracteres\n", strlenString(argv[1]));	

	return 0;
}

int strlenString(char *str){ //char *str have the address of the first char from the string.
	int size = 0;
	while (*str!='\0'){ // checks if the has a '\0'(the end of the string)
	 	size++;
		str++;
	}
	return size;
}
