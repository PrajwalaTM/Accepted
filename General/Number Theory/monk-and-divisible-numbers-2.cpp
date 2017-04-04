#include <bits/stdc++.h>
using namespace std;
# define MOD 1000000007
long int minPrimeFactor[1000005];


void minprimefactor(long int n)
{
memset(minPrimeFactor,0,sizeof(minPrimeFactor));
long int i,j;
for(i=2;i*i<=n;i++)
{
	if(minPrimeFactor[i]==0)
	{
		for(j=i;j<=n;j+=i)
		{
			if(minPrimeFactor[j]==0)
			{minPrimeFactor[j]=i;}
		}
	}
}
for(i=2;i<=n;i++)
{
if(minPrimeFactor[i]==0)
{minPrimeFactor[i]=i;}
}
}
void factorize(long long n,map<long long,long long>&m)
{
	long long i;
	minprimefactor(n);
	while(n!=1)
	{
		m[minPrimeFactor[n]]=(m[minPrimeFactor[n]]+1)%MOD;
		n/=minPrimeFactor[n];
	}
}
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
long long mod_inv(long long a,long long m)
{
return mod_exp(a,m-2,m);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b,c,x,res=1;
		scanf("%lld%lld%lld",&a,&b,&c);
		x=mod_exp(b,c,MOD);
		//y=mod_inv(a,MOD);
		//z=(x*y)%MOD;
		map <long long,long long> m1,m2,m3;
		map <long long,long long> :: iterator it;
		factorize(a,m1);
		factorize(x,m2);		
		for(it=m2.begin();it!=m2.end();it++)
		{
			if(m1[it->first])
			{
				if(it->second>=m1[it->first])
				m3[it->first]=it->second-m1[it->first];
				else
					m3[it->first]=0;
			}
			else
				m3[it->first]=it->second;

		}
		for(it=m3.begin();it!=m3.end();it++)
		{
			res=(res*mod_exp(it->first,it->second,MOD))%MOD;
		}
		printf("%lld\n",res);
	}
	return 0;
}
