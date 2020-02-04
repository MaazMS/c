#include<stdio.h>
 
void main(void) 
{
      int number,sum=0,remainder=0,increase=0,addition;
      
      printf("enter the number");
      scanf("%d",&number);
      addition=number; 
      
      while(number>0) 
      {
              remainder=number%10;
              number=number/10;
              sum=sum*10+remainder;
              increase=increase+1;
      }
      if(sum==addition)
      {
             printf("number is palindrome");
      }
      else
      {
             printf("number is not palindrome");
      }
}
/*OUTPUT 
enter the number121 
number is palindrome
*/
