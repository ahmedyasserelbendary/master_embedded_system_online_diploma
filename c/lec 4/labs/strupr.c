
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i=0;
    int n=0;
    printf("enter a string :");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=97 && a[i]<=122)
            a[i]-=32;
    }
    printf("\n%s\n",a);

    return 0;
}
