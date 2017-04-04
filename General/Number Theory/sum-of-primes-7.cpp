#include <bits/stdc++.h>
using namespace std;

#define N 1000000
bool mark[N+1];


void sieve()
{
	long long i,j;
	memset(mark,true,sizeof(mark));
	mark[1]=false;
	for(i=2;i*i<=N;i++)
	{
		if(mark[i]==true)
		{
		for(j=2*i;j<=N;j+=i)
			mark[j]=false;
		}
	}
}

/*void calc_primes()
{
	memset(prime,0,sizeof(prime));
	long int i,j;
	prime[1]=1;
	for(i=2;i*i<=1000000;i++)
	{
		if(prime[i]==0)
		{
			for(j=i*i;j<=1000000;j+=i)
			{
				prime[j]=1;
			}
		}
	}
}*/
int main()
{
	long int n,l,r,i,s;
	scanf("%ld",&n);
	//calc_primes();
	sieve();
	long long int sum[N+1];
	memset(sum,0,sizeof(sum));
	sum[1]=0;
	for(i=2;i<=N;i++)
	{
		if(mark[i])
			sum[i]=sum[i-1]+i;
		else
			sum[i]=sum[i-1];
		//printf("%lld\n",sum[i]);

	}
	while(n--)
	{
		scanf("%ld%ld",&l,&r);
		s=sum[r]-sum[l-1];
		printf("%ld\n",s);
	}
	return 0;
}