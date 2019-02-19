/*
 * The difference between lower case character and upper case character  is 32 .
 * Addition of 32 in  upper case character  is convert to lower case character .
 *subtraction of 32 in lower case character is convert to  upper  case character    .
 */
 
 
#include<stdio.h>


int main(void)
{
	setbuf(stdout, NULL);

	char character;

	printf("enter the character");
	scanf("%c",&character);

	if(character>='A' && character<='Z')              
	{

		character=character+32;                                                       // convert to lower case character 
		printf("Lower case character %d - %c \n ",character,character);

	}


	if(character>='a' && character<='z')
	{

		character=character-32;                                                       // convert to  upper  case character
		printf("Upper case character %d - %c \n ",character,character);
	}

	else
	{
		printf("The given character is not alphabet \n");
	}


	return 0;

}
/*
 OUTPUT

enter the characterM
Lower case character 109 - m 
 Upper case character 77 - M 
 

*/
