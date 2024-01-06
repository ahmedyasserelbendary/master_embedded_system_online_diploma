// calculate average using array
#include<stdio.h>
int main()
{
    float array[100];
    char n=0;
    char i=0;
    float sum=0;

    printf("plaese enter the number of elements : ");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("\n array[%i] = ",i+1);
        scanf("%f",&array[i]);
        sum+=array[i];
    }
    printf(" \n average = %0.3f \n",sum/n);
    return 0;
}
