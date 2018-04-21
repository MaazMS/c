#include<stdio.h> 
#include<conio.h> 
void main() 
{
     int number,increase;
     clrscr();
     printf("enter the number");
     scanf("%d",&number); 
     while(increase<number)
     {
            increase=increase+1;
            printf("%d",increase);
      }
      getch();
}
