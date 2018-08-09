#include<stdio.h>
#include<stdlib.h>
void total(int *internal ,int *external );    // global declaration of function total with two pointer integer
int main()
{
	setbuf(stdout, NULL);
	int internal_marks,external_marks;
	printf("enter the internal_marks ");
	scanf("%d",&internal_marks);
	printf("enter the external_marks ");
	scanf("%d",&external_marks);
	total(&internal_marks,&external_marks);         // pass addresses of variables internal_marks and external_marks with call function total
	printf("final marks is : %d",internal_marks)    /* because internal_marks address is store in pointer variables internal and the addition
									                                   operation is perform by this step *internal =*internal +*external ;*/
	return 0 ;
}
void total(int *internal ,int *external  )    /*Addresses of variables internal_marks and external_marks is store
                                                 in pointer variables internal  and external */
{

	*internal =*internal +*external ;
}
/* output
enter the internal_marks 20
enter the external_marks 80
final marks is : 100
*/
