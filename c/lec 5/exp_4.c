#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    int base=0;
    int n=0;
    printf("enter the number :");
    scanf("%d",&number);
    printf("enter the base :");
    scanf("%d",&base);
    n=power(number,base);
    printf("\nresult is   %d\n",n);
    return 0;
}
int power(int number,int base)
{
  static int pow;
  if (base>0)
  pow=number*power(number,base-1);
  else
    return 1;
  return pow;
}
