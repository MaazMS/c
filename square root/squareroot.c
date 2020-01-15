#include<stdio.h>

int main()
{
	long number; 
	float temp, sqrt;
	int static count=0;
	printf("Enter the number");
	scanf("%ld",&number); 

	sqrt=number/2; 
	temp=0;
	while(sqrt !=temp)
	{
		temp=sqrt;
		sqrt=(number/temp + temp)/2; 
		count++;
	}
	printf("cunt= %d\n",count);
	printf("%ld\t %f\n",number,sqrt);
	
	return 0;
}
/*OUTPUT
Enter the number10000000000
cunt= 20
number =10000000000	 square root =100000.000000
*/
