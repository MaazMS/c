/*
 * When a function has no arguments means it does not receive any data from the calling
 *  function. Similarly when it does not return a value means the calling function 
 *  does not receive any data from the called function.
 */


#include<stdio.h>
#include<stdlib.h>


void message(void);                              // message function declaration
void main(void)

{
        printf("\n welcome ");
        message();                                   // message function is call 
        printf("\n welcome again ");
 }
 
 
void  message(void)                                    // message function defination

  {
        printf("\n welcome back");
  }
  
  
/* output
 welcome
 welcome back
 welcome again
 */
