/*
   write a program in c to reverse element in array
*/
#include<stdio.h>
int main()
{
    int array[21]; // max size to user is 20 element but i make array 21 element to make last element temp
    int i=0;
    int length=0;
    int *ptr=array;
    printf("\n enter the length of array max size is 20 element :");
    scanf("%d",&length);
    for(i=0;i<length;i++)
    {
        printf("\n element [%i] : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<length/2;i++)
    {
        ptr[20]=ptr[i];
        ptr[i]=ptr[length-1-i];
        ptr[length-1-i]=ptr[20];
    }

    printf("\nelement array in reverse order are :  \n");
     for(i=0;i<length;i++)
    {
        printf("\n element [%i] : %d ",i+1,ptr[i]);

    }

    return 0;
}
