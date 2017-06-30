#include<stdio.h>
int main()
{
int a[o];
int i;
int greatest;
for(i=1;i<10;i++)
{
scanf("%d",&a[i]);
}
greatest=a[0];
for(i=0;i<10;i++)
if(a[i]>greatest){
a[i]=greatest;
}
printf("greatest among ten numbers");
return 0;
}
