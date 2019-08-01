#include<stdio.h>

int main()
{
	int divisor,divident,quotient,remainder,i=0;	
	
	printf("\nEnter the divident\n");
	scanf("%d",&divident);
	
	printf("enter the divisor\n");
	scanf("%d",&divisor);
	
	while(1)
	{

		quotient=divident/divisor;
		remainder=divident%divisor;
    
		i++;
    
		printf("New divident is = %d and new divisor is = %d\n",divident,divisor);
		printf(" quotient = %d \n",quotient);
		printf("remainder = %d \n",remainder);
		printf("\n\n");
    
		if(remainder==0)
		{
    
			printf("\n\n\n");
			printf("divisor=%d\n",divisor);
			break;	
      
		}
    
		divident=divisor;
		divisor=remainder;
    
	}
	
	printf("how many time while loop execute =%d\n",i);
	printf("quotient =%d\n",quotient);
	printf("remainder=%d\n",remainder);
	return 0;
}
/*OUTPUT
Enter the divident
91
enter the divisor
43
New divident is = 91 and new divisor is = 43
 quotient = 2 
remainder = 5 


New divident is = 43 and new divisor is = 5
 quotient = 8 
remainder = 3 


New divident is = 5 and new divisor is = 3
 quotient = 1 
remainder = 2 


New divident is = 3 and new divisor is = 2
 quotient = 1 
remainder = 1 


New divident is = 2 and new divisor is = 1
 quotient = 2 
remainder = 0 





divisor=1
how many time while loop execute =5
quotient =2
remainder=0
*/
