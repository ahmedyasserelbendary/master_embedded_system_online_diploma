/* write c program to find sum of two matrix of order 2*2 using multidimension array
where elements of matrix are entered by user */
#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int sum[2][2];
    int i=0;
    int j=0;
    printf("enter the element of matrix a[2][2] : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n a[%i][%i] = ",i+1,j+1);
            scanf("%i",&a[i][j]);
        }
    }
    printf(" a[2][2] =\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

            printf("             %i  ",a[i][j]);

        }
        printf("\n");
    }
     printf("enter the element of matrix b[2][2] : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n b[%i][%i] = ",i+1,j+1);
            scanf("%i",&b[i][j]);
        }
    }
    printf(" b[2][2] =\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

            printf("             %i  ",b[i][j]);

        }
        printf("\n");
    }


     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
            sum[i][j]=a[i][j] + b[i][j];
         }
     }
      printf(" sum[2][2] =\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

            printf("             %i  ",sum[i][j]);

        }
        printf("\n");
    }

    return 0;
}
