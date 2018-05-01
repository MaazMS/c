#include<stdio.h>
#include<conio.h>
void main(void)
// the \b is a escape sequence.
// in turboc++ compiler \b is cut the character bfore the \b escape sequence.
{
      clrscr();
      printf("Md Maaz\b\b\bshaikh");
      getch();
}
/* output 
MdMshaikh   */
