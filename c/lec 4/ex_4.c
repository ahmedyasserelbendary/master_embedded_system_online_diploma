#include<stdio.h>
int main()
{
    int a[50];
    int n=0;
    int i=0;
    int j=0;
    int l=0;
    int v=0;
    printf("enter no of elements : ");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%i]= ",i);
        scanf("%i",&a[i]);
    }
    printf("enter the element to be inserted :");
    scanf("%i",&v);
    printf("enter the location : ");
    scanf("%i",&l);
    a[l]=v;
    for(i=0;i<n;i++)
    {
        printf(" a[%i] = %i \n",i,a[i]);
    }



    return 0;
}
