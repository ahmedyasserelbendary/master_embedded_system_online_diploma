#include<stdio.h>
struct employee_info
{
    char name[50];
    int id;
};
struct employee_info emp_1,emp_2,emp_3,emp_4;
struct employee_info (*array[4]);

struct employee_info *ptr;

int main()
{
    int i=0;
    array[0]=&emp_1;
    array[1]=&emp_2;
    array[2]=&emp_3;
    array[3]=&emp_4;
    ptr=&array;

    printf("\nenter the data of four employee \n");
    for(i=0; i<2; i++)
    {
        printf("\nenter name of employee : ");
        gets(array[i]->name);
        printf("\nenter ID of employee   : ");
        scanf("%d",&(array[i]->id));
        fflush(stdin);
        fflush(stdout);

    }

    printf("\nenter the employee number to get data about this employee  :");
    scanf("%d",&i);
    i--;

    printf("\nemloyee name : %s",array[i]->name);
    printf("\n employee ID : %d",array[i]->id);

    return 0;
}

