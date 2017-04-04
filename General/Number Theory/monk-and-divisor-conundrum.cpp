#include <bits/stdc++.h>
using namespace std;

long long f[200005],c[200005];
long long gcd(long long a,long long b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	long long n,p,q,g,l,ans,temp;
	scanf("%lld",&n);
	long long a[n],i,j,t;
	memset(c,0,sizeof(c));
	memset(f,0,sizeof(f));
	for(i=0;i<n;i++)
	{
	scanf("%lld",&a[i]);
	c[a[i]]++;
	}
	for(i=1;i<=200000;i++)
	{
		for(j=i;j<=200000;j+=i)
			f[i]+=c[j];
	}
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&p,&q);
		g=gcd(p,q);
		l=(p*q)/g;
		if(l>200000)
			temp=0;
		else
			temp=f[l];
		ans=f[p]+f[q]-temp;
		printf("%lld\n",ans);
	}
	return 0;
}