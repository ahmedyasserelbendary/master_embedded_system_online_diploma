// WRITE C PROGRAM to check character is alphapet or not
#include <stdio.h>
int main()
{
  char character=0;
    printf("enter your number :");
    scanf("%c",&character);
    switch(character)
    {

    case 'a' :
    case 'b' :
    case 'c' :
    case 'd' :
    case 'e' :
    case 'f' :
    case 'g' :
    case 'h' :
    case 'i' :
    case 'j' :
    case 'k' :
    case 'l' :
    case 'm' :
    case 'n' :
    case 'o' :
    case 'p' :
    case 'q' :
    case 'r' :
    case 's' :
    case 't' :
    case 'u' :
    case 'v' :
    case 'w' :
    case 'x' :
    case 'y' :
    case 'z' :
        printf(" %c is alphabet ",character);
        break;
    default :
        printf(" %c is not alphabet ",character);
    }
    return 0;
}

