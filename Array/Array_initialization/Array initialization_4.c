#include<stdio.h>

int main()
{
	int a[10];
	a[3/2]=1;	       // [3/2=1.5] This is initialize a[1]=1
  	a[2]=5;
        a[2]=2;		      // a[2]=5 and again a[2]=2 the value of a[2]=2 update the block of a[2].
	a[3]=3;
        a[-3]=3;	      // warning: array subscript is below array bounds

	printf("%d\n",a[1]);   // 1   
	printf("%d\n",a[2]);   // 2
	printf("%d\n",a[3]);   // 3

	printf("%d\n",a);       //warning: format '%d' expects argument of type 'int', but argument 2 has type 'int *'
	printf("%d\n",*a);	//warning: 'a[0u]' is used uninitialized in this function
	printf("%d\n",a[-1]);	// warning: array subscript is below array bounds
	printf("%d\n",a[12]);	// warning: array subscript is above array bounds and also print the address
      //printf("%d\n",a[]);	 error: expected expression before ']' token printf("%d\n",a[]);
	return 0;
}

/*
OUTPUT
1
2
3
2358768
2358816
2040
2359056
*/
