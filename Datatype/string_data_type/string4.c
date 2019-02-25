//if use  gets function it is not cut extra character  after space and enter .
	
#include<stdio.h>

int main()

{
	
	char string[10];

	printf("Enter the character for string");
	
  gets(string);  // accept string .       

	printf("%s",string);
  
  
	return 0 ;
}

/*

 OUTPUT
Enter the character for stringhellow world
hellow world

 */
