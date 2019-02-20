/*
 * we are asking the compiler to convert the type forcefully one data type to another data type.
 * This type of casting is known as explicit casting .
*/

#include <stdio.h>


int  main()
{
	
  int first_number=5,second_number=2;
	float division;

	division=(float)first_number/second_number;   // explicit type casting  . float = float /int

	printf("division=%f ",division);

	return 0 ;
  
 }

/*
OUTPUT 
division=2.500000 
*/
