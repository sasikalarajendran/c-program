#include<stdio.h>
int main()
{
int n,i;
int fact;
printf("enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of number");
return 0;
}
