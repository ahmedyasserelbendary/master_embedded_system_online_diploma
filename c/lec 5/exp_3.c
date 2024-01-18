#include <stdio.h>
#include <stdlib.h>
void rev_sen(char a[],int b);

int main()
{
    char a[50];
    printf("\nenter the string you want :");
    gets(a);
    int b=0;
    b=strlen(a);
    rev_sen(a,b);
    printf("%s\n",a);
    return 0;
}
void rev_sen(char a[],int const b)
{

    static int i=0;
    if(i<b/2)
    {
        a[b+1]=a[i];
     a[i]=a[b-1-i];
     a[b-1-i]=a[b+1];
     i++;
     rev_sen(a,b);


    }


}
