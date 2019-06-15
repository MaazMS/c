// scanset %[^\n] is allow to accecpt the input until a new line 
#include<stdio.h>
int main()
{
    
    char input_string[105];              // Declare a variable named 'input_string' to hold our input.
    
    scanf("%[^\n]", input_string);      // scanset %[^\n] is allow to accecpt the input until a new line .
    
    printf("Hello, World.\n");
    
    printf("%s",input_string);
    
    
    return 0;
}

/* 
INPUT Hello, World.
OUTPUT Welcome to 30 Days of Code! 
*/
