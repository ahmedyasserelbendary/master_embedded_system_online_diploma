
/*
write a program in c print a string in reverse using a pointer
*/
#include <stdio.h>
#include <string.h>
int main()
{
   char array[50];
   char *ptr=array;
   int i=0;
   int length=0;

   printf("\n input a string : ");
   gets(ptr);
   length=strlen(ptr);
   printf("\n reverse of string is  : ");
   for(i=length-1;i>=0;i-- )
   {
      printf("%c",ptr[i]);

   }
   printf("\n\n");


    return 0;
}
