#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,q,i,low,high,mid,x,sum,count,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&x);
		low=0;high=n-1,sum=0,count=0;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(a[mid]<=x)
				{
					for(int j=low;j<=mid;j++)
						{sum+=a[j];count++;}
					low=mid+1;
				}
			else if(a[mid]>x)
				high=mid-1;
		}
		printf("%d %d\n",count,sum);
	}
	return 0;
}