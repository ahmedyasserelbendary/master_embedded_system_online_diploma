// Write Source Code to Swap Two Numbers

#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    int temp=0;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n after swapping , value of a = %d \n",a);
    printf("\n after swapping , value of b = %d \n",b);

    return 0;
}
