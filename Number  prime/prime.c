#include<stdio.h>

int main()
{
        int number,increase,flag;
	flag=1;
      
        printf("enter the number");
        scanf("%d",&number); 
 
        for(increase=2;increase<number;increase++)  // loop is start form 2.beaseue every number % by 1  is equal to zero.
        {
                if(number%increase==0) // only prime number it self and 1 is mod by zero.Means falg=1 is not change
		flag=0;		
        }
        if(flag==1)
        {
               printf("%d number is prime",number);
        }
        else
        {
               printf("%d number is not prime",number);
        }
       return 0;
}        
/*OUTPUT 
enter the number4
number is not prime
*/
