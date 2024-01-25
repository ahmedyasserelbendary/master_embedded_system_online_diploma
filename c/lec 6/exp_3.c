/*
   write a program to add or sub two complex number
*/
#include<stdio.h>
enum status
{
    ADD=1,
    SUB,
};
struct complex_number
{
    float real_number;
    float imagnary_number;

};
struct complex_number num_1,num_2,result;
enum status state;
struct complex_number process(struct complex_number num_1,struct complex_number num_2 , enum status state);

int main()
{
    int selection=0;
  printf("enter the first complex number \n");
  printf("enter the real number :");
  scanf("%f",&num_1.real_number);
  printf("enter the imagnary number :");
  scanf("%f",&num_1.imagnary_number);
  printf("enter the second complex number \n");
  printf("enter the real number :");
  scanf("%f",&num_2.real_number);
  printf("enter the imagnary number :");
  scanf("%f",&num_2.imagnary_number);
  printf("\n\n");
  printf("what process you want  1-addition     2- sutractio  \n");
  printf("\n enter number of selectio 1 or 2   : ");
  scanf("%d",&selection);
  if(selection ==1)
    {
        state=ADD;
        result=process(num_1,num_2,state);
        printf("\n sum = (%0.2f)+(%0.2fi) \n",result.real_number,result.imagnary_number);


    }
    else if(selection==2)
    {
      state=SUB;
        result=process(num_1,num_2,state);
         printf("\n sub = (%0.2f)-(%0.2fi) \n",result.real_number,result.imagnary_number);
    }
    else
        printf("\nplease enter correct selection 1 or 2\n");

        printf("===========================================");



    return 0;
}
struct complex_number process(struct complex_number num_1,struct complex_number num_2 , enum status state)
{
    struct complex_number result;
    switch(state)
    {
    case ADD :
        result.real_number=num_1.real_number+num_2.real_number;
        result.imagnary_number=num_1.imagnary_number+num_2.imagnary_number;
        break;
    case SUB:
        result.real_number=num_1.real_number-num_2.real_number;
        result.imagnary_number=num_1.imagnary_number-num_2.imagnary_number;
     break;
    }
    return result;


};
