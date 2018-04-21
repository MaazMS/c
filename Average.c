#include<stdio.h>
#include<conio.h> 
void main() 
{
       char n;
       int a,b,c;
       float t=0;
       clrscr();
       printf("\n enter the student name\t"); 
       scanf("%s",n);
       printf("\n enter the mark 1\t"); 
       scanf("%d",a);
       printf("\n enter the mark 2\t"); 
       scanf("%d",b);
       printf("\n enter the mark 3\t"); 
       scanf("%d",c);
       printf("\n average marks of all subjects \t");
       t=a+b+c/3; 
       printf("%f",t);
       getch(); 
}
