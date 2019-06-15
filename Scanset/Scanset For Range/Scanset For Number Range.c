/*
 * Scanset use for range of number have different output
 * 1) If the range of number is used at beginning then it is return the range of number.
 * 2) if the range of number is not used at beginning then it return garbage value.
 * 3) If the range of number is used in between any no-range of number then that range of number is not return.
 * 4) If used number range that time use format specifier %s not use %d.Because %d is return garbage value.
 * 5) It is not accept new line number and character.
 * Example to check the output result at the end of the program .
 */
 
 
#include<stdio.h>

int main()

{
	
  char string[90];

	scanf("%[0-9]",string);

	printf("%s",string);

	return 0;
  
}

/*
Inpout 123A
Outpot 123
*/

/*
Inpout A123
Outpot �)@
*/

/*
Inpout 123A123
Outpot 123
*/
