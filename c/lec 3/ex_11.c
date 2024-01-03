// WRITE C PROGRAM to check number is positive
#include <stdio.h>
int main()
{
    int number=0;
    printf("enter your number :");
    scanf("%d",&number);
    if(number==0)
        printf("you enter zero not positive and negative");
    else if(number > 0)
        printf(" %d is positive",number);
    else
        printf(" %d is negative",number);

    return 0;
}
