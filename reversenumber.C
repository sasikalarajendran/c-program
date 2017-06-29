#include<stdio.h>
int main()
{
int n,revno=0,rem;
printf("enter an integer");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
revno=revno*10+rem;
n/=10;
}
printf("revno=%d",revno);
return 0;
}
