
// c program to find factorial of a number
#include<stdio.h>
int main()
{
    int num_1=0;
    int i=0;
   unsigned long long factorial=1;
    printf("pleas enter the number :");
    scanf("%d",&num_1);
    for(i=num_1;i>0;i--)
    {
        factorial*=i;
    }
    printf("\nfactorial= %i\n",factorial);


    return 0;
}
