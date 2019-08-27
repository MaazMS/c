#include<stdio.h>

int main()
{

	int i=1000,j=0,k=10;
  
  i =(j++,k++); 
  // Assigns the value of k to i 10.Because  left value always evaluates to the rightmost argument . k=11  because of postfix ++. 
  
  /*
  i =(j++,++k);
	Assigns the value of k to i 11.Because  left value always evaluates to the rightmost argument .k=11 because of prefix ++ 
  i =:11 J =:1 k =:11
  */
  
  printf("i =:%d J =:%d k =:%d ",i,j,k); 
  
  return 0;
}
/*OUTPUT 
i =:10 J =:1 k =:11 
*/
