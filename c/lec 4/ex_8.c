// c program to reverse string without using library function
#include<stdio.h>
int main()
{
   char a[100];
   char b[100];
    int i=0;
    int n=0;
    int j=0;
    printf("enter a string :");
    gets(a);
    n=strlen(a);
    for(i=0,j=n-1;i<n&&j>=0;i++,j--)
    {
        b[i]=a[j];
    }
    printf("\n%s\n",a);
    printf("\n=====================\n");
    printf("\n%s\n",b);



    return 0;
}
