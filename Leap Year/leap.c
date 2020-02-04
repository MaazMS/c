// leap year concept in c wiki 
#include<stdio.h>

int isleapyear(int year);

int main()
{
	int year;
	printf("Enter the year\t");
	scanf("%u",&year);
	
	if(isleapyear(year))
	printf("It is leap year");
	else
	printf("It is not leap year");
	return 0;	
	
}

int isleapyear(int year)
{
	if(year%4==0)
	{
		if(year%100==0)
		{
		
			if(year%400==0)
			{
				return 1;
			}
			return 0;
		}
	}
	return 1;
} 
/*OUTPUT 
Enter the year	1900 
It is not leap year
Enter the year	2012
It is leap year
*/
