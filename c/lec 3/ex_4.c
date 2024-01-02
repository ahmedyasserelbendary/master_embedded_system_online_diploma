// Write C Program to Multiply two Floating Point Numbers
#include <stdio.h>
int main()
{
    float num_1=0.0;
    float num_2=0.0;
    float mul =0.0;
    printf("enter two numbers : ");
    scanf(" %f %f",&num_1,&num_2);
    mul= num_1 * num_2;
    printf("\nproduct : %0.3f\n",mul);


    return 0;
}
