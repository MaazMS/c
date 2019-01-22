/*
  An array is collection of similar data type items stored at continuous memory locations and accessed using a common name.
*/

#include<stdio.h>

int main()
 {
   int index,number=6;
   int block[5]={1,2,3,4,5,6};                     // warning: excess elements in array initializer
   
   printf("\n display array  the values \n ");
   for (index = 0; index < number; index++)
   {
      printf("[%d] = %d\n", index, block[index]);   // warning: iteration 5u invokes undefined behavior [-Waggressive-loop-optimizations]
   }
   return (0);
 }
 /*
display array  the values 
[0] = 1
[1] = 2
[2] = 3
[3] = 4
[4] = 5
[5] = 0
 */
