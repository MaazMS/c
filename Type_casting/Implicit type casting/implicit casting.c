  // Implicit type conversion

#include<stdio.h>

int main()

{
	short snumber=11;
	int inumber;

	inumber=snumber;		// Implicit type conversion


	printf("snumber=%d\n",snumber);

	printf("inumber=%d\n",inumber);

	return 0;

}
/*
OUTPUT
snumber=11
inumber=11

 */
