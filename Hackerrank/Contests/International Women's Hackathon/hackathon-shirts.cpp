#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	scanf("%d",&q);
	while(q--)
	{
		long long n;
		scanf("%lld",&n);
		long long a[n+1],i;
		a[0]=0;
		for(i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		long long v;
		scanf("%lld",&v);
		long long low[v+1],high[v+1];
		long long lb[v+1],ub[v+1];
		for(i=1;i<=v;i++)
		{
			scanf("%lld %lld",&low[i],&high[i]);
		}
		sort(a,a+n+1);
		long long c[50005],s[50005];
		memset(c,0,sizeof(c));
		for(i=1;i<=v;i++)
		{
			lb[i]=lower_bound(a+1,a+n+1,low[i])-a;	
			ub[i]=upper_bound(a+1,a+n+1,high[i])-a;
			printf("%lld %lld\n",lb[i],ub[i]);
			c[lb[i]]++;
			c[ub[i]]--;
		}		
		s[0]=c[0];long long ans=0;
		for(i=1;i<=n;i++)
			s[i]=s[i-1]+c[i];
		for(i=1;i<=n;i++)
		{
			if(s[i])
				ans++;
		}
		printf("%lld\n",ans);
	}
	return 0;
	}