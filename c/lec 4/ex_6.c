// cprogram to find thhe frequency of character in a string
#include<stdio.h>
#include<string.h>
int main ()
{
    char array[100];
    int i=0;
    int n=0;
    int repeated=0;
    char character=0;
    printf("enter a string :");
    gets(array);
    printf("enter a character to find frequency :");
    scanf("%c",&character);
    n=strlen(array);
    /*while(array[i] !=0 )   // strlen() function
    {
        n++;
        i++;
    }*/
    printf("\n%d\n",n);
    for(i=0;i<n;i++)
    {
        if(array[i]==character)
         {
              repeated++;
         }

    }
    printf("\nfrequency of %c  = %d\n",character,repeated);

    return 0;
}
