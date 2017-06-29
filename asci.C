#include<stdio.h>
#include<conio.h>
void main()
{
int asci=0;
clrscr();
while(asci<=255)
{
printf("%d%c\n",asci,asci);
asci++;
}
printf("\n press any key to proceed");
getch();
}
