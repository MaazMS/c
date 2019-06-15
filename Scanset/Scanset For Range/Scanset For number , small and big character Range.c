#include<stdio.h>

int main()

{

  char string[90];

	scanf("%[A-Z-a-z]",string);     // It accpect For number,small and big character Range.

	printf("%s",string);

	return 0;

}

/*
Inpout a123A
Outpot a123A
*/

/*
Inpout Z123a
Outpot Z123a
*/
