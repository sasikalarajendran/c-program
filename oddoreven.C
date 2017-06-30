#include<stdio.h>
int main()
{
int i,n,odd_sum,even_sum;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
even_sum=even_sum+i;
else
odd_sum=odd_sum+i;
}
printf("the sum of even numbers",even_sum);
printf("the sum of odd numbers",odd_sum);
return 0;
}
