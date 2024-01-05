// c programming to make simple calculator to add , subtractor ,multiply or divide using switching case
#include<stdio.h>
int main()
{
  int num_1=0;
  int num_2=0;
  char ch=0;
  printf("pleas enter the operration \n");
    printf("enter the first number :");
    scanf("%d",&num_1);
    fflush(stdin);
    printf("enter the second number :");
    scanf("%d",&num_2);
        fflush(stdin);
    printf("enter type of operation ( '+' /'-'/'*'/ '/' /'%' ):");
    scanf("%c",&ch);
        fflush(stdin);
    switch(ch)
    {
         case '+' :
            printf("\n %i + %i = %i\n",num_1,num_2,num_1+num_2);
            break;
         case '-' :
            printf("\n %i - %i = %i\n",num_1,num_2,num_1-num_2);
            break;
        case '*' :
            printf("\n %i * %i = %i\n",num_1,num_2,num_1*num_2);
            break;
        case '/' :
            printf("\n %i / %i = %i\n",num_1,num_2,num_1/num_2);
            break;
        case '%' :
            printf("\n %i % %i = %i\n",num_1,num_2,num_1%num_2);
            break;
        default :
            printf("\n erro error !! \n please enter operator from above operators\n");
            break;
    }
return 0;
}

