/*
 * In this program the address is print by using format specifier %p . the %p is use to print the address which is store in pointer 
 */
#include<stdio.h>
#include<stdlib.h>
int main()

{
	int clock=10;
	int *cell;
	cell=&clock;
	printf("\n address of a pointer is cell : %p",cell);
	printf("\n address of a pointer is cell : %d",&cell);
	printf("\n address of a pointer is cell : %u",cell);      // print address in form of  positive integer.
	printf("\n value of variable in the clock : %d",*cell);   // value which is store inside the pointer.
	printf("\n address of a variable  clock : %p",clock);
	printf("\n address of a variable clock : %u",&clock);      // print address in form of  positive integer.
	printf("\n  value of variable in the clock : %d",*(&clock));
	printf("\n value of variable in the clock  : %d",clock);
  	//printf("\n address of a pointer is clock : %d",*clock); error: invalid type argument of unary '*' (have 'int')
	return 0 ;
}
/*  output:
address of a pointer is cell : 000000000023FE1C
 address of a pointer is cell : 2358800
 address of a pointer is cell : 2358812
 value of variable in the clock : 10
 address of a variable  clock : 000000000000000A
 address of a variable clock : 2358812
  value of variable in the clock : 10
 value of variable in the clock  : 10

 */

