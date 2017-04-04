//http://www.spoj.com/problems/CANDY/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==-1)
			break;
		int a[n],x,ans,sum=0,i;
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		sum+=a[i];
		}
		if(sum%n)
			{printf("-1\n");continue;}
		else
		{
			x=sum/n;
			ans=0;
			for(i=0;i<n;i++)
				{
					if(x-a[i]>0)
						ans+=x-a[i];
				}
			printf("%d\n",ans);
		}
	}
	return 0;
}