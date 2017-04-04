#include <bits/stdc++.h>
using namespace std;

long int binarysearch(long int r,long p[],long n)
{
long int low=0,high=n-1,mid,ans=-1;
while(low<=high)
{
	mid=(low+high)/2;
	if(p[mid]<=r)
		{
			low=mid+1;ans=mid;
		}
		else 
			high=mid-1;
			//printf("%ld %ld %ld",low,high,mid);
}
	return ans+1;
}
int main()
{
	long int n,i;
	scanf("%ld",&n);
	long int x[n],y[n],p[n];
	for(i=0;i<n;i++)
		scanf("%ld %ld",&x[i],&y[i]);
	long int q,r,count;
	scanf("%ld",&q);
	for(i=0;i<n;i++)
		{
			p[i]=ceil(sqrt(x[i]*x[i]+y[i]*y[i]));
		}
	sort(p,p+n);
	while(q--)
	{
		count=0;
		scanf("%ld",&r);
		count=binarysearch(r,p,n);
		printf("%ld\n",count);
	}
	return 0;
}