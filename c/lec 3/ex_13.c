
// c program to calculate sum of natural numbers
#include<stdio.h>
int main()
{
    int num_1=0;
    int i=0;
    int sum=0;
    printf("pleas enter the number :");
    scanf("%d",&num_1);
    for(i=num_1;i>0;i--)
    {
        sum+=i;
    }
    printf("\n sum = %i\n",sum);


    return 0;
}
