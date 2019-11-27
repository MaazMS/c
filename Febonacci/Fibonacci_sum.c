#include<stdio.h>

void main(void) 
{ 
       int number,first=-1,second=1,third,sum=0,increase; 
       
       printf("enter the number");
       scanf("%d",&number); 
       for(increase=1;increase<=number;increase++)    
       { 
             third=first+second; 
             sum=sum+third;
             printf("%d\n",sum); 
             first=second;
             second=third;
        } 
}
/* OUTPUT
enter the number1
0
enter the number2
0
1
*/
