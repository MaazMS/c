/*
 * malloc function is return the null pointer .
 *  
 */

#include<stdio.h>
#include<stdlib.h>
int  main()
{
	char *a;
	a=malloc(10 * sizeof (char));
	if (a == NULL)
	{
		printf("memory is not allocate ");
	}
	else
	{
		printf("memory is  allocate");
	}
	return 0 ;
}

/*
output
memory is  allocate 
*/
