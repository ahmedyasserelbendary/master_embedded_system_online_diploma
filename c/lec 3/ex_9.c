// write c program to check vowel or consonant
#include<stdio.h>
int main()
{
    char character=0;
    printf("enter an alphabet :");
    scanf("%c",&character);
    switch(character)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            printf(" %c is a vowel",character);
            break;
        default :
            printf(" %c is a consonant",character);



    }
    return 0;
}
