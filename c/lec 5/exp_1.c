//c program to display prime number between any interval
#include<stdio.h>
void prime(void);

int main()
{


    prime();
    return 0;
}
void prime(void)
{
    int a=0;
    int b=0;
    printf("please enter the intervals :");
    fflush(stdin);
    scanf("%d",&a);
    fflush(stdin);
    scanf("%d",&b);
    fflush(stdin);
    printf("the prime number between interval [%d , %d] :\n",a,b);

	int i=0;
    for(;b>=a;a++)
    {
        for(i=2;i<a;i++)
        {
            int x=0;
            x=a%i;
            if(x==0)
            {
                break;
            }

        }
        if((a-i)==0)
        printf("%d  ",a);
    }
}
