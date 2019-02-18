#include<stdio.h>

int main()

{
	
	char character='M',another_character;		//  initialization and declaration of character

	printf("character is %c \n ",character);
	printf("enter the character ");


	another_character=getchar();         //  initialization  of character
	
	printf("you have typed another characteris %c \n ",another_character);

	return 0;
}

/*
OUTPOT
character is M 
 enter the character m
you have typed another characteris m 
*/
