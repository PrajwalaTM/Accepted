#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,l,r;
	scanf("%lld%lld",&n,&m);
	long long a[n],i,sum,ans;
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
    l=0;r=0;sum=0;ans=0;
    while(l<n)
    {
    	while(r<n && sum+a[r]<=m)
    	{
    		sum+=a[r];r++;
    	}
    	ans=max(ans,sum);
    	sum-=a[l];
    	l++;
    }
    printf("%lld\n",ans);
    return 0;
}