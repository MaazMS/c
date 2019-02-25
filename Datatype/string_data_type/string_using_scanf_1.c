

#include<stdio.h>

int main()

{
	
  char string[10];     // Declaration of string using data type char and size defined by square bracket [] 
  
  
  printf("Enter the character for string");
	
  scanf("%s",string);                                 // accept string 
	
  printf("%s",string);                               // print string using format specifier %s
	
  
  return 0 ;
  
}
/*
OUTPUT
Enter the character for stringhellow world
hellow
 */
