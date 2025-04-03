#include <stdio.h>
int fact(int n)
{
if (n==1)
return 1;
return n*fact(n-1);
}
void main()
{
int n;
printf("enter the number of n");
scanf("%d",&n);
printf("factorial of a number is %d",fact(n));
}
