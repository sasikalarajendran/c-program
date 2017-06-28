#include<iostream.h>
string commonPrefix(string arr[],int n)
{
int index=findMinlength(arr,n);
string prefix;
int low=0;high=index;
while(low<=high)
{
int mid=low+(high-low)/2;
if(allcontainsprefix(arr,n,arr[0],low,mid)
{
prefix=prefix+arr[0].substr(low,mid-low+1);
low=mid+1;
}
else
high=mid-1;
}
return(prefix);
}
int main()
{
string arr[]={"geeksforgeeks","geeks","geek","geezer"};
int n=sizeof (arr)/sizeof (arr[0]);
string ans=commonPrefix(arr,n);
if(ans.length())
cout<<"the longest common prefix is"
<<ans;
else
cout<<"there is no common prefix";
return(0);
}
