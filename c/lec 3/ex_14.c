
// c program to find factorial of a number
#include<stdio.h>
int main()
{
    int num_1=0;
    int i=0;
   unsigned long long factorial=1;
    printf("pleas enter the number :");
    scanf("%d",&num_1);
    if(num_1 >0)
    {
        for(i=num_1;i>0;i--)
        {
            factorial*=i;
        }
        printf("\nfactorial= %i\n",factorial);
    }
    else
    {
        printf("\nerror error !! \n");
        printf("\please enter positive number not negative or zero \n");



    }


    return 0;
}
