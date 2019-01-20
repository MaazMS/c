
/*
  A whole number, or integer, that is the sum of the nth powers of its digits  is called an Armstrong number. It is also sometimes
  known as an n-narcissistic number , perfect digital invariant ,plus perfect number .if you find three digit Armstrong number then 
  multiply remainder three times and if you find four digit armstrong number then remainder multiply four times .
  Armstrong number source:http://oeis.org/A005188
*/


#include<stdio.h>

int main(void)
{
       int number=0,sum=0,Same_multiply=0,addition=0,remainder=0,increase=0;
       setbuf(stdout, NULL);

       printf("enter the value of number ");
       scanf("%d",&number);                                                   // user enter the any digit in 'number'
       addition=number;                                                      //Assign 'number' variable value  into 'addition' variable

       while(number>0)
       {
           remainder=number%10;                                                 // To get last digit of number use mode operation ( % ) .
           Same_multiply=remainder*remainder*remainder*remainder*remainder;     // The last digit number multiply by the same number.
           sum=sum+Same_multiply;                                               // sum is collect all value for armstrong number
           number=number/10;                                                     /* if last number is finished then check second last  
                                                                                  number until the first number .*/
           increase=increase+1;  	                                                // increase variable use to continue the while loop
       }

        if(sum==addition)                                                          /* compare the 'addition' variable ( which assign by
                                                                                      'number variable) with 'sum' variable */
        {
           printf("number is Armstrong");
        }
        else
        {
           printf("number is not Armstrong");
        }

}
/*
output
enter the value of number 1634
number is Armstrong 
*/
