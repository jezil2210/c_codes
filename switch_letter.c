#include <stdio.h>
#include <locale.h>

char *switchLetter(char *str, char old_letter, char new_letter);

int main(int argc, char *argv[]){
	char str[100];
	char old_letter, new_letter;

	setlocale(LC_ALL, "");
	
	mem_set(str, 0, 100*sizeof(str[0]))

	printf("Write some string...  ");
	fgets(str, 100, stdin);
	printf("Write the letter to change  ");
	old_letter = getchar(); // gets the letter
	getchar(); // to avoid mistakes, gets the enter key
	printf("Write the letter to replace the old letter  ");
	new_letter = getchar();

	printf("The string was: %s\n", str);
	printf("The new string is: %s\n", switchLetter(str, old_letter, new_letter));


	return 0;
}

char *switchLetter(char *str, char old_letter, char new_letter){
	char *beginning = str; // Creates a pointer to save the initial address of the string
	while(*str!='\0'){ // Comparing the content of the address that the pointer points, in this case the string
	     if(*str == old_letter){
	     	*str = new_letter;
	     }
	     str++; // the next position(char) of the memory, that is the string. 
	}
	return beginning;
}
