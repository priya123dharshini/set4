#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
   for(i = 0; str[i] !='\0'; i++)
   {
      l = l + 1;
   }
   puts("the no of charcter in string is %d\n",l)
   getch();
   }
