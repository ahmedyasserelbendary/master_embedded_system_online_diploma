
/*
write a c program in c to demonstrate how to handle the pointers in the program
*/
#include<stdio.h>
int main()
{
    int m=29;
    int *ptr=NULL;
    printf("\n_____________________________________\n");

    printf("\n adderss of m: 0x %X\n",&m);
    printf("\n value of m : %d\n",m);
    printf("\n_____________________________________\n");


    ptr=&m;
    printf("\n adderss in pointer ptr : 0x %X\n",ptr);
    printf("\n value of m : %d\n",*ptr);
    printf("\n_____________________________________\n");


    m=34;
    printf("\n adderss in pointer ptr : 0x %X\n",ptr);
    printf("\n value of m : %d\n",*ptr);
    printf("\n_____________________________________\n");


    *ptr=7;
    printf("\n adderss in pointer ptr : 0x %X\n",&m);
    printf("\n value of m : %d\n",m);
    printf("\n_____________________________________\n");



    return 0;
}
