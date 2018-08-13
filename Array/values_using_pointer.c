// print the value of the array element using the pointer .
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int array[4]={1,2,3,4},index;		           	// declare 4 variable
	int *without_address;
	without_address=array;
	for(index=0;index<=3;index++)
	{
		printf("%d\t",*without_address);          // return array value
		without_address++;				              	// increase pointer variable
	}
}
/* output
1   2   3   4 
*/
