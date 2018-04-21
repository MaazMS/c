#include<stdio.h>
#include<conio.h> 
void main(void) 
{ 
       int number,first=0,second=1,third,sum=1,increase=2; 
       clrscr(); 
       prinrf("enter the number");
       scanf("%d",&number); 
       while(increase<number) 
       { 
             third=first+second;
             sum=sum+third;
             first=second;
             second=third; 
             increase=increase+1;
        } 
        printf("%d",sum); 
        getch();
}
