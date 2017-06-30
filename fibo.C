#include<stdio.h>
int main();
{
int a=0,b=1,n,i,c;
printf("enter the numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
printf("the fibonacci series:",c);
return 0;
}
