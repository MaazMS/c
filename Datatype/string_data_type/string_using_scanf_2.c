/*
if use address operator (&) . then it give warning and it's also cut extra character after space and enter .
warning: format '%s' expects argument of type 'char *', but argument 2 has type 'char (*)[10]' [-Wformat=]
*/


#include<stdio.h>

int main()

{
	
  char string[10];     // Declaration of string using data type char and size defined by square bracket [] 
  
  
  printf("Enter the character for string");
	
  scanf("%s",&string);                                // accept string use % operator 
	
  printf("%s",string);                               // print string using format specifier %s
	
  
  return 0 ;
  
}
/*
OUTPUT
Enter the character for stringhellow world
hellow
 */
