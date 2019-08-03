/* carriage return character \r.
By defition of carriage, any of the section which carry the passenger in train . 
\r use and the send that means no charracter . 
before \r character is ignore. 
if printf statement is use bfore the \r without \n escape sequence then it is also ignore by \r.
*/

#include<stdio.h>

int main()
{

	
	printf("Welcome \n");
	printf("\r Hello \r world Maaz");
}

/*OUTPUT
Welcome 
 world Maaz
*/
