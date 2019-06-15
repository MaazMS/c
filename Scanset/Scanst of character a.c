/*
 * Scanset of specific character have different output.
 * 1) If the specific character is used at beginning then it is return the specific character.
 * 2) if the specific character is not use at beginning then it return garbage value.
 * 3) It is not accept new line character.
 * Example to check the output result at the end of the program .
 */
 
#include<stdio.h>

int main()

{
	
	char string[90];

	scanf("%[a]",string);   // It is scanset of character of 'a'. 

	printf("%s",string);    // It is not accept new line character.

	return 0;

}

/* OUTPUT specific character is not use at beginning
bac
�)@
 */



/*	OUTPUT	It is not accept new line character.
abc
a
 */

/*	OUTPUT	It is not accept new line character.
aaa
aaa
*/
