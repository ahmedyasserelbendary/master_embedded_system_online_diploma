// c program to search element in array
#include <stdio.h>
int main()
{
    int array[50];
    int i=0;
    int n=0;
    int v=0;
    int j=0;
    printf("enter no of elements : ");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("array[%i]= ",i);
        scanf("%i",&array[i]);
    }
    printf("enter the elements to be searched :");
    scanf("%i",&v);
    for(i=0;i<n;i++)
    {
        if( v==array[i])
            j=i;
    }
    if(j==0)
        printf("\n %i  not found in the array\n",v);
    else
        printf("\n %i number found at the location = %i ",v,j);

    return 0;
}
