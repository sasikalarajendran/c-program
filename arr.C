#include<stdio.h>
int main()
{
int arr[100];
int i,max,min,size;
printf("enter the size of array");
scanf("%d",&size);
printf("enter elements in array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for(i=1;i<size;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(min<arr[i])
{
min=arr[i];
}
}
printf("maximum element=%d\n",max);
printf("minimum element=%d",min);
return 0;
}
