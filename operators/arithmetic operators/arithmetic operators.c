/*
 * All these Arithmetic operators in C are binary operators which means they operate on two operands.
 * There are total five (5) arithmetic operators in c language .
 * These all  arithmetic operators are arrange by there  priority .
 *  1 . priority  Multiplication/division/modulus 
 * 2 . priority  Addition/subtraction
 */

#include<stdio.h>


int main()

{
	
  int number1=10 ,number2=5;


	printf("%d * %d = %d\n ",number1,number2,number1*number2);      // Multiplication
	printf("%d / %d = %d\n ",number1,number2,number1/number2);      // division
	printf("%d %% %d = %d\n ",number1,number2,number1%number2);     // modulus
	printf("%d + %d = %d\n ",number1,number2,number1+number2);      // Addition
	printf("%d - %d = %d\n ",number1,number2,number1-number2);      // subtraction

	return 0;
}
/*
OUTPUT
10 * 5 = 50
 10 / 5 = 2
 10 % 5 = 0
 10 + 5 = 15
 10 - 5 = 5
 
*/
