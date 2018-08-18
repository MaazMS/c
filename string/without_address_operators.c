/*
 * if use  address operators is  cut extra character.By default the variable itself points to the base address and  therefore to access
 *  base address of string ,there is no need of adding an extra ‘&’ ..
 */
#include<stdio.h>
#include<stdlib.h>


int main()

{
    char string[10];

	 printf("Enter the character for string");
	 scanf("%s",string);                        // But extrata character is cut if you enter the ENTER button.
	 printf("%s",string);
	 return 0 ;
}
/*
OUTPUT
Enter the character for string
helloworld
helloworld
*/
