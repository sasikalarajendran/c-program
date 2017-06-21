#include<stdio.h>
int main()
{
int i,n,fact;
printf("enter a number");
scanf("%d",&n);
if(n<0)
printf("the factorial does not exist");
else
for(i=1;i<=n;i++)
{
fact=fact*i;
printf("the factorial number is");
}
return 0;
}
