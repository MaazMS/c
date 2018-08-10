/*one function working they need another work at that time then use pointer_funation.To pass value in argument
  end then function is run */
 #include<stdio.h>
 #include<stdlib.h>
 void call(int argument)
{
	printf("pass argument with pointer_function %d\n",argument);
	printf("go to home\n");
}
int main()
{
	void (*pointer_function)(int) = call; 	// assign the address of the function to the pointer
  //(pointer_function) = &call;           // assign the address of the function to the pointer    
	printf("welcome\n");
	(pointer_function)(2);	                // call the call function
 // (*pointer_function)(2);		             // call the call function
	printf("success");
	return 0 ;
}
/*  output
welcome
pass argument with pointer_function 2
go to home
success
*/
