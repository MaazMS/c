/*
 * It is use to accept many number of line.
 * This symbol name is bitwise exclusive OR operator.
 * After  bitwise exclusive OR operator use any symbol and letter and number or range of character and number.
 * After bitwise exclusive OR operator the symbols,letters and number is encounter then the input value is return. 
 * condition : Not separata symbols,characters,number by using comma ( , ).
 * 1) if use two symbol to after bitwise exclusive  operator then write to symbol together example @#.
 * 
 * check some example with syntax and explination .
 * scanf("%[^a]",string);                 If type  'a' as input then  it give output.
 * scanf("%[^A]",string);	          If type  'A' as input then  it give output.
 * scanf("%[^a-z]",string);	          If type  'a-z' as input then  it give output.
 * scanf("%[^A-Z]",string);	          If type  'A-Z' as input then  it give output.
 * scanf("%[^0-9]",string);	          If type  '0-9' as input then  it give output.
 * scanf("%[^A-Z-0-9-a-z]",string);	  If type  'A-Z-0-9-a-z' as input then  it give output.
 * scanf("%[^@#]",string);                If type  '@#' as input then  it give output.
 * scanf("%[^@,#]",string);               If type  '@,#' as input then  it give output.
 * 
 */
#include<stdio.h>

int main()

{
   char string[90];
   
   scanf("%[^$]",string);     // If type  '$' as input then  it give output.
	
   printf("%s",string);

   return 0;

}

/*
Inpout 
123
ABD
abc
$
Outpot
123
ABD
abc
*/
