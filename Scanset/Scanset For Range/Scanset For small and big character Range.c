/*
 * Scanset use for range of character have different output
 * 1) If the range of character  is used at beginning then it is return the range of character.
 * 2) if the range of character  is not used at beginning then it return garbage value.
 * 3) If the range of character  is used in between any no-range of character  then that range of character is not return.
 * 4) If used both  small and big character range that timeuse only one format specifier %s.
 * 5) It is not accept new line character.
 * Example to check the output result at the end of the program .
 */
 
 
#include<stdio.h>

int main()

{
	char string[90];

	scanf("%[A-Z-a-z]",string);  // It use to set the both range number small and big character.

	printf("%s",string);          // use only one format specifier %s.

	return 0;

}


/*
Inpout Abc123
Outpot Abc
 */

/*
Inpout 123Abc
Outpot �)@
 */

/*
Inpout Abc123Abc
Outpot Abc
 */
