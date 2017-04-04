//http://www.spoj.com/problems/LASTDIG/
#include <bits/stdc++.h>
using namespace std;

long long mod_exp(long long a,long long b,long long m)
{
	long long res=1;
	while(b>0)
	{
		if(b%2)
			res=(res*a)%m;
		b/=2;
		a=(a*a)%m;
	}
	return res;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld%lld",&a,&b);
		long long ans=mod_exp(a,b,10);
		printf("%lld\n",ans);
	}
	return 0;
}