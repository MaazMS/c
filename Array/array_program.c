/* 
In this array program  to accept user value and print the element of array but if you enter the loop condition more then the  array 
element is always accept extra element and also print the value of array size element and  extra element which you entered. It is called 
Undefined Bahavior. Undefined bahavior means the result of executing program  is not prescribed by the language specification. 
 */

#include<stdio.h>

int main()
 {
	
   int index, block[5], number; // array block size 5 

   printf("\nEnter number  of elements which you want to append :");
   scanf("%d", &number);

   printf("\nEnter the values :");
   for (index = 0; index <= number; index++)
   {
      printf("enter the element of array %d",index);
      scanf("%d", &block[index]);
   }

   printf("\n display array  the values :");
   for (index = 0; index <= number; index++)
   {
      printf("[%d] = %d\n", index, block[index]);

   }

	return (0);
}
/*
OUTPUT
Enter number  of elements which you want to append :7

Enter the values :enter the element of array 01
enter the element of array 12
enter the element of array 23
enter the element of array 34
enter the element of array 45
enter the element of array 56
enter the element of array 67

 display array  the values :[0] = 1
[1] = 2
[2] = 3
[3] = 4
[4] = 5
[5] = 6
[6] = 7
*/
