/*
In computer programming undefined behavior (UB) is the result of executing computer code whose behavior is not prescribed by the
language specification to which the code adheres for the current state of the program.
*/
#include<stdio.h>
#include<stdlib.h>


int main()
 {
   int index, block[5], number;

   printf("\nEnter number  of elements which you want to append :");
   scanf("%d", &number);
   printf("\nEnter the values :");
   for (index = 0; index <= number; index++)
   {
       scanf("%d", &block[index]);
   }
   for (index = 0; index <= number; index++)
   {
       printf("%d\t", block[index]);
   }
   return (0);
}
/*
Enter number  of elements which you want to append :6

Enter the values :1
2
3
4
5
6
7 
*/
