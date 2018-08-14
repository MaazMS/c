#include<stdio.h>
#include<stdlib.h>
int main()

{
	int block[2][3]={1,2,3,4,5,6};

	printf("%d\n",block[1][2]);			            // print 6
	printf("%d\n",*(block[0]+2));		            // print 3
	printf("%d\n", (* ( *block ) + 2 ) );       // print 3
	printf("%d\n", * ( *  ( block ) + 2 ) );    // print 3
	printf("%d\n", ** (block + 1)  );		        // print 4  change the row. 

	return 0 ;
}
/* 
output
6
3
3
3
4
*/
