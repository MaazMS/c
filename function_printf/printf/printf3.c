/*
 * first print the inner printf function and it return the string to the outer printf function .
 * The outer printf function printf the string size the integer format .
*/

#include <stdio.h>

int  main()
{

  printf("%d",printf("Hello world"));
  
  return 0 ;
 }
 /*
 OUTPUT
 
 Hello world11
 
 */
