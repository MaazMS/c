/*
Use scanset with asterisk  %* .
  1)  %[^\n]%*c   means not discard new line character.
                  input   Hello World         output   Hello World

  2)  %d%*c       means It display only integer and not show other character and symbol.  
     	 	          input    100A	               output	100
			             input   100ABC	             output	100

  3) %c%*d        means it display only character and not show other character and symbol.
	                 input  A1                    output  A�#

   4) "%s%*d"   means it display only string without newline and white space.
			          input  Welcome4                 output Welcome4
			                  4    
			         input	  Welcome to code ! 2      output	Welcome

*/

#include<stdio.h>

int main()
{

	int day,month,year;
  
  
	scanf("%d%*c%d%*c%d", &day, &month, &year);     // %*c  is indicate that one character is discarded (Not show) .
  
	printf("%d%d%d",day,month,year);

	return 0;
  
}
/*

INPUT 12/12/2012
OUTPUT 12122012

*/
