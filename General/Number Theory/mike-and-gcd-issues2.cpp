// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/mike-and-gcd-issues/
#include <bits/stdc++.h>
using namespace std;

vector<long long> primelist[200005];
vector<long long > res[200005];
long long  minPrimeFactor[200005];

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

int main()
{
	long long n,x,d;
	scanf("%lld",&n);
	long long a[n],i,j,ind,prime;
	minprimefactor(200005);
	for(i=1;i<=n;i++)
	{
	scanf("%lld",&a[i]);
	x=a[i];
	while(x>1)
	{
		d=minPrimeFactor[x];
		res[i].push_back(d);
		primelist[d].push_back(i);
		while(!(x%d))
			x/=d;
	}
	}
	for(i=1;i<=n;i++)
	{
		long long best=-1;
		auto consider = [&](long long int j) {
			if(best == -1 || make_pair(abs(j - i), j)
						< make_pair(abs(best - i), i))
				best = j;
		};
		for(prime:res[i])
		{
			std::vector<long long> &v=primelist[prime];
			ind=lower_bound(v.begin(),v.end(),i)-v.begin();
			if(ind!=0)
			consider(v[ind-1]);
			if(ind!=v.size()-1)
				consider(v[ind+1]);
		}
		printf("%lld ",ind);
	}
	
	return 0;
}