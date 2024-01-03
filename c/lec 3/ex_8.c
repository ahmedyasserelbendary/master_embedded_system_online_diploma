// write c program to check whether a number is even or odd
#include<stdio.h>
int main()
{
    int number=0;
    printf("enter an integer you want to check : ");
    scanf("%d",&number);
    if(number==0)
        printf(" zero isnot odd or even");
    else if((number%2)==0)
        printf("\n %d is even\n",number);
    else
        printf("%d is odd",number);

    return 0;
}
