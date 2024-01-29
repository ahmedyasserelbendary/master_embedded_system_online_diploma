
/*
write a program in c to print all alphabets using a pointer
*/
#include<stdio.h>
int main()
{
    char x='a';
    char *ptr=&x;
    int i=0;

    for( i ; 1 ; i++ )
    {
        printf(" %c \t",(*ptr)+i);
        if(  (*ptr)+i == 'z') break;
    }




    return 0;
}
