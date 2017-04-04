#include <bits/stdc++.h>
using namespace std;

long int count0(long int x,long int a[],long int n)
{
	long int low=0,high=n-1,count=0,mid;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(a[mid]>=x)
				{
					count+=high-mid+1;
					high=mid-1;
				}
			else if(a[mid]<x)
				low=mid+1;
		}
		return count;
}
long int count1(long int x,long int a[],long int n)
{
	long int low=0,high=n-1,count=0,mid;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(a[mid]>x)
				{
					count+=high-mid+1;
					high=mid-1;
				}
			else if(a[mid]<=x)
				low=mid+1;
		}
		return count;
}

int main()
{
	long int n,i;
	scanf("%ld",&n);
	long int a[n];
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	long int q,x;
	int ch;long int ans;
	scanf("%ld",&q);
	sort(a,a+n);
	while(q--)
	{
		scanf("%d%ld",&ch,&x);
		switch(ch)
		{
			case 0: ans=count0(x,a,n);break;
			case 1: ans=count1(x,a,n);break;

		}
		printf("%ld\n",ans);
	}
	return 0;
}