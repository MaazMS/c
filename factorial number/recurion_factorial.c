#include<stdio.h>

int factorial(unsigned int no);

int main()
{

	int number;
	printf("Enter the number ");
	scanf("%d",&number);
	printf("%d",factorial(number));
  
}

int factorial(unsigned int no)
{
	if (no==0)
	return 1;
	
	else 
	return no * factorial(no-1);
  
}
/*OUTPUT 
Enter the number 3
6
Enter the number 1
1
Enter the number 0
1
*/
