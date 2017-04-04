#include <bits/stdc++.h>
using namespace std;

long int binarysearch(long x,long n,long h[],long l[],long r[])
{
long int low=0,high=n-1,mid,ans=-1;
while(low<=high)
{
	mid=(low+high)/2;
	if(x<h[0])
		return l[0]+x-1;
	else if(x==h[n-1])
		return r[n-1];
	else if(h[mid]<=x && h[mid+1]>x)
		{
			return l[mid+1]+x-1-(h[mid]);
		}
	else if(h[mid-1]<=x && h[mid]>x)
		return l[mid]+x-1-(h[mid-1]);
	else if(h[mid]>x)
		high=mid-1;
	else if (h[mid]<x)
		low=mid+1;
		else 
			return h[mid];
}
}
int main()
{
	long int n,i,x,ans,q;
	scanf("%ld%ld",&n,&q);
	long h[n+1],l[n],r[n];
	for(i=0;i<n;i++)
	{
	scanf("%ld%ld",&l[i],&r[i]);
	if(i)
	h[i]=h[i-1]+r[i]-l[i]+1;
	else
	h[0]=r[0]-l[0]+1;
	}
	while(q--)
	{
		scanf("%ld",&x);
		ans=binarysearch(x,n,h,l,r);
		printf("%ld\n",ans);
	}
	return 0;
}