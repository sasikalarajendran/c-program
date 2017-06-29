#include<stdio.h>
int main()
{
char str[MAX_SIZE];
int alphabets,digits,others,i;
alphabets=digits=others=i=0;
printf("enter any string");
gets(string);
while(string[i]!='\0')
{
if((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z'))
{
alphabets++;
}
else if(string[i]>='0'&&string[i]<='9')
{
digits++;
}
else
{
others++;
}
i++;
}
printf("alphabets=%d\n",alphabets);
printf("digits=%d\n",digits);
printf("special characters=%d\n",special characters);
return 0;
}
