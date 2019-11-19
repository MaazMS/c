#include<stdio.h>

unsigned int factorial(unsigned int no) // only accept positive number and zero and not accept negative number
{
	if (no == 0 )                         // factorial of zero is 1 . more details go c- wiki -> factorial number  
	return 1;
	else
	{	
		int fact=1,i;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	
	return fact;
	}
}

void main()
{
	int number;
	printf("Enter the number");
	scanf("%d",&number);
	printf("%d",factorial(number));
}
/* OUTPUT
Enter the number0
1
Enter the number1
1
Enter the number2
2
Enter the number3
6
*/
