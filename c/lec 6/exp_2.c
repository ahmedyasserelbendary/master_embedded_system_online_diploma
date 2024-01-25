
/*
  write c program to add two distance (in inch-feet)system using structure
*/
#include<stdio.h>
struct distance
{
    int feet;
    float inch;
};
struct distance d_1,d_2,sum;
int main()
{
    printf("please enter the information of 1st distance \n");
    printf("\n enter feet :");
    scanf("%d",&d_1.feet);
    printf("\n enter inch :");
    scanf("%f",&d_1.inch);
    printf("please enter the information of 2ad distance \n");
    printf("\n enter feet :");
    scanf("%d",&d_2.feet);
    printf("\n enter inch :");
    scanf("%f",&d_2.inch);
    sum.feet=d_1.feet+d_2.feet;
    sum.inch=d_1.inch+d_2.inch;
    if(sum.inch>12)
    {
        sum.inch-=12;
        ++sum.feet;
    }

    printf("\nsumof distance=%d\'-%0.1f\"",sum.feet,sum.inch);

    return 0;
}
