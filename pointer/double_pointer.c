/*
 * THe operator ' * ' is called Indirection (dereference). The indirection operators give the value of variable.which is inside the address.
 * THe operator ' & ' is called Address operators. The address operators is give the address of variable.
 * if you use '*(&)variable_name' then you print value of variable.
 * if the name of variable,pointer variable is write in the printf() then value which is store inside the variable,pointer variable is print.
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int city= 20;
	int *pointer;
	int ** double_pointer;
	pointer=&city;
	double_pointer=&pointer;

	printf("\n The value of city variable is %d :",city );
	printf("\n The value of city variable is %d :",*pointer );
	printf("\n The value of city variable is %d :",** double_pointer); // address of pointer > address of city > value of city

	printf("\n The address of city variable %u",&city );
	printf("\n The address of city variable %u",pointer );
	printf("\n The address of city variable %u",* double_pointer); // value of pointer means address of city

	printf("\n The address of pointer %u",&pointer );
	printf("\n The address of pointer %u",double_pointer  );

	printf("\n value of  pointer %d",pointer );
	printf("\n value of  pointer %d",*double_pointer ); //value of pointer means address of city

	printf("\n The address of double_pointer  %u",&double_pointer );
	printf("\n The value  of double_pointer  %u",double_pointer );

	return 0 ;

}
/*  output
The value of city variable is 20 :
 The value of city variable is 20 :
 The value of city variable is 20 :
 The address of city variable 2358780
 The address of city variable 2358780
 The address of city variable 2358780
 The address of pointer 2358784
 The address of pointer 2358784
 value of  pointer 2358780
 value of  pointer 2358780
 The address of double_pointer  2358792
 The value  of double_pointer  2358784         
 */
