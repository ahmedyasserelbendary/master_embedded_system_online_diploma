// c program to find transpose of a matrix
#include<stdio.h>
int main()
{
    int a[20][20];
    int b[20][20];
    int i=0;
    int j=0;
    int r=0;
    int c=0;
    printf("enter number of row :");
    scanf("%i",&r);
    fflush(stdin);
    printf("enter number of colum :");
    scanf("%i",&c);
        fflush(stdin);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" \n a[%i][%i] = ",i+1,j+1);
            scanf("%i",&a[i][j]);
            fflush(stdin);

        }
    }
    printf("\na[%i][%i] =\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("     %i  ",a[i][j]);


        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=a[j][i];

        }
    }
    printf("\nb[%i][%i] =\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("     %i  ",b[i][j]);


        }
        printf("\n");
    }




    return 0;
}
