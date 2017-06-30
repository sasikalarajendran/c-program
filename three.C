#include<stdio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("A is greatest",a);
}
elseif((b>a)&&(b>c))
{
printf("B is greatest",b);
}
else
printf("c is greatest",c);
}
return 0;
}
