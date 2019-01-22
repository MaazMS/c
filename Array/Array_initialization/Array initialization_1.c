/*
  An array is collection of similar data type items stored at continuous memory locations and accessed using a common name.
*/
#include<stdio.h>

 int main()
  {
	 int block[5];                                                               //Declare the array variable 
   int index,number;
   
   printf("\nEnter number  of elements which you want to append :");
   scanf("%d", &number);                                                        // for size the array 

   printf("\nEnter the values \n:");
   for (index = 0; index <= number; index++)
   {
	   printf("enter the element of array %d\t",index);                           // print array block with index
     scanf("%d", &block[index]);
   }

   printf("\n display array  the values \n :");
   for (index = 0; index <= number; index++)
   {
      printf("[%d] = %d\n", index, block[index]);

   }


   return (0);
}
/*
OUTPUT
Enter number  of elements which you want to append :4

Enter the values :
enter the element of array 0	1
enter the element of array 1	2
enter the element of array 2	3
enter the element of array 3	4
enter the element of array 4	5

display array  the values :
[0] = 1
[1] = 2
[2] = 3
[3] = 4
[4] = 5
  
 */
