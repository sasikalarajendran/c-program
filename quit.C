#include<stdio.h>
int main()
{
char ch;
int i;
clrscr();
printf("press 1 to 5 again and again");
while(1)
for(i=1;i<5;i++)
printf("\n%d",i);
ch=getch();
if(ch=='Q')
exit(0);
}
getch();
}
