#include<stdio.h>

void main() 
{ 
        int number,first=0,second=1,third,increase=2;
        
        printf("enter the number"); 
        scanf("%d",&number);
        
        printf("%d%d",first,second); 
        
        while(increase<number)   // increase start form 2 because 0 and 1 is already print. 
        {
             third=first+second;
             first=second;
             second=third;
             increase=increase+1;
             printf("%d",third);
        }
        
}
