#include<stdio.h>

int main()
{
	int block[3][3]={1,2,3,4,5,6,7,8,9};

	printf("%d\n",  block[1][2]);		// print 6
	printf("%d\n", *(block[0]+2));		// print 3
	printf("%d\n",(*( * block ) + 2 ) );    // print 3
	printf("%d\n", *( *( block ) + 2 ) );   // print 3
	printf("%d\n", **  (block +1)+1  );	// print 5  change the row beacuse **(block +1)
	printf("%d\n", **  (block +2)+1  ); 	// print 8  change the row beacuse **(block +2)

	return 0 ;
}
/* 
output
6
3
3
3
5
8
*/
