// write c program to find the largest number among three numbers
#include<stdio.h>
int main()
{
    int num_1=0;
    int num_2=0;
    int num_3=0;
    printf("enter three numbers :");
    scanf(" %d %d %d ",&num_1,&num_2,&num_3);
    if( (num_1 > num_2) && (num_1 > num_3) )
        printf("largest number = %d ",num_1);
    else if ( (num_2 > num_1) && (num_2 > num_3))
       printf("largest number = %d ",num_2);
    else if ( (num_3 > num_1) && (num_3 > num_2) )
       printf("largest number = %d ",num_3);


    return 0;
}
