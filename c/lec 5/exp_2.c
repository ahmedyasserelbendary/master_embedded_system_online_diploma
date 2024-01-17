
#include<stdio.h>
int main()
{
    int a=0;
    int x=0;
    printf("please enter the number :");
    scanf("%d",&a);
    if(a>=0)
        x=factorial(a);
    else
        printf("\n !!!! undefine number\n");
    printf("\nfactorial is %d\n",x);



    return 0;
}
int factorial(int a)
{
    if(a==0)
        return 1;
    else
        return a*factorial(a-1);
}
