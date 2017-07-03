#include<stdio.h>
int main()
{
int x,y,temp;
printf("enter the value of x and y");
scanf("%d%d",&x,&y);
printf("before swapping");
temp=x;
x=y;
y=temp;
printf("after swapping");
return 0;
}
