#include<stdio.h>
int main()
{
int n,rema,rev;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
rema=rev%10;
rev=rev*10+rema;
n/=10;
}
printf("the reverse number is");
return 0;
}
