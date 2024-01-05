// WRITE C PROGRAM to check character is alphapet or not
#include <stdio.h>
int main()
{
  char character=0;
    printf("enter your number :");
    scanf("%c",&character);
    if ( (character>=97 && character <= 122) || (character>=65 && character <= 90)  ) // equevlant character in ascii table
         printf(" %c is alphabet ",character);
    else
        printf(" %c is not alphabet ",character);

    return 0;
}

