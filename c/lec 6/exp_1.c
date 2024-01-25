/*
  write c program to store information (names,rolls and marks) of a students using structre
  user enter the information
*/
#include<stdio.h>
struct student_info
{
    char name[50];
    int roll;
    float mark;
};
struct student_info ahmed;
int main()
{
    printf("enter the name of student :");
    gets(ahmed.name);
    printf("\nenter the roll os student :");
    scanf("%d",&ahmed.roll);
    printf("\nenter the mark os student :");
    scanf("%f",&ahmed.mark);

    printf("\nname : %s\n",ahmed.name);
    printf("\nroll = %d\n",ahmed.roll);
    printf("\nmark= %0.2f\n",ahmed.mark);








    return 0;
}
