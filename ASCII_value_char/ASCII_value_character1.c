#include<stdio.h>


int main(void)
{
	char character;

	printf(" enter the character\n");

	scanf("%c",&character);
	printf("%d - %c ",character,character);			// return ASCII value and character
  
  return 0 ;
}
/*
OUTPUT

enter the character
m
109 - m 

 */
