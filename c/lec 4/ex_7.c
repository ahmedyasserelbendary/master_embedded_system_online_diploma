// c program to find the length of a string
#include<stdio.h>
int main()
{
   char array[100];
    int i=0;
    int n=0;
    printf("enter a string :");
    gets(array);
     while(array[i] !=0 )   // strlen() function
    {
        n++;
        i++;
    }
    printf("\nlength of string : %d\n",n);
    return 0;
}
