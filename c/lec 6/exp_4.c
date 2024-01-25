/*
  write c program to store information (names,rolls and marks) of a students using structre
  user enter the information
*/
#include<stdio.h>
enum constant
{
    num=10
};
struct student_info
{
    char name[50];
    int roll;
    float mark;
};
struct student_info student[10];
enum constant number_of_student;

int main()
{
    number_of_student=num;
    int i=0;
    int j=0;
    int character;
    for(i=0;i<number_of_student;i++)
    {
    printf("\nenter the name of student[%i] :",i+1);
    gets(student[i].name);
    fflush(stdin);
    fflush(stdout);
    printf("\nenter the roll os student :");
    scanf("%d",&student[i].roll);
    fflush(stdin);
    fflush(stdout);
    printf("\nenter the mark os student :");
    scanf("%f",&student[i].mark);
    fflush(stdin);
    fflush(stdout);
    printf("if you want to exit press  y to continue press any character :");
    scanf("%c",&character);
    fflush(stdin);
    fflush(stdout);
        if(character=='y')
            break;
    }

     for(j=0;j<i+1;j++)
     {
         printf("===============================");
         printf("\nname : %s\n",student[j].name);
         printf("\nroll = %d\n",student[j].roll);
         printf("\nmark= %0.2f\n",student[j].mark);
         printf("===============================");

     }






    return 0;
}

