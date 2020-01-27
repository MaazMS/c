/* 

1 ) fmod method use for finding float point reaminder.
2 ) fmod in #include <math.h> header file .
3 ) Run this program with the help of #include <stdlib.h> header file and command is gcc  array.c -o array -lm
*/

#include <stdio.h>
#include <math.h>  
#include <stdlib.h>  

float find(float,float);
float main(){

	float Divisor,Dividend,remainder; 
	printf("Enter Divisor and dividend");
	scanf("%f%f",&Divisor,&Dividend);
	remainder=find(Divisor,Dividend);
	printf("%f",remainder);
	return remainder;

}

float find(float Divisor1,float Dividend1){
	
  float Remainder1;
	Remainder1=fmod(Divisor1,Dividend1);
	return Remainder1;	
} 
/* INPUT
3.14 
2.1 
OUTPUT 
1.040000 */
