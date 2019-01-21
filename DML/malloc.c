/*
 * The name "malloc()" stands for memory allocation.
 * malloc() is u under <stdlib.h>
 * It  is used to dynamically allocate a single large block of memory with the specified size.
 * It returns a pointer of type void which can be cast into a pointer of any form.
 * Memory allocated by "malloc()" is  store garbage value when any input is not store in malloc() block .
 *
 * program ............(scanf() is in comment)
 * Enter total number of elements: 3
 * memory is  allocate
 * enter the number of an array
 * display array number402961603998032
 */

#include<stdio.h>
#include<stdlib.h>
int  main()
{
	
	int *allocate;                                    // pointer variable is used allocate memory by malloc() . 
	int i,max;

	printf("Enter total number of elements: ");
	scanf("%d", &max);

	allocate=(int *) malloc(max * sizeof (int));        /* Syntax of malloc()is
	                                                     varibale_name = (cast-type *) malloc (byte-size) */

	if (allocate == NULL )           
	{
		printf("memory is not allocate ");
	}
	else
	{
		printf("memory is  allocate");
	}
	
	printf("\n enter the number of an array");
	for(i=0;i<max;i++)
	{
		  scanf("%d", (allocate + i));              // input store by pointer variable (addition of pointer variable concept)
	}
	
	printf("\n display array number");
	for(i=0;i<max;i++)
	{
		printf("%d",*(allocate+i));                 // output display by pointer variable (addition of pointer variable concept)
	}  
	return 0 ;
}
/*
 * Enter total number of elements: 4
 memory is  allocate
 enter the number of an array1
2
3
4

 display array number1234
 */
