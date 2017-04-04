#include <bits/stdc++.h>
using namespace std;

std::vector<long long> prime;

void sieve(long long n)
{
	long long i,j;
	bool mark[n+1];
	memset(mark,true,sizeof(mark));
	for(i=2;i*i<n;i++)
	{
		if(mark[i]==true)
		{
		for(j=2*i;j<n;j+=i)
			mark[j]=false;
		}
	}
	for(i=2;i<n;i++)
	{
		if(mark[i]==true)
			{
			prime.push_back(i);
			//printf("%lld\n",i);
		}
	}
}
void segmentedsieve(long long int m,long long int n)
{
	//long long int limit=100000;
	
	long long low,high,low_limit,i,j;
	low=m;
	high=n;
	bool mark[n-m+2];
	memset(mark,true,sizeof(mark));
	        for(i=0;i<prime.size();i++)
	        {
			low_limit=floor(low/prime[i])*prime[i];
			if(low_limit<low)
				low_limit+=prime[i];
			if(low_limit>high)
				break;
			for(j=low_limit;j<=high;j+=prime[i])
				{
				if(j!=prime[i])
				mark[j-low]=false;
				//printf("%lld\n",j);
			}

		}
		for(i=low;i<=high;i++)
		{
			//printf("%d\n",mark[i-low]);
			if(mark[i-low]==true)
				{

				//v.push_back(i);
					if(i!=1)
			    printf("%lld\n",i);
			}

		}
}
int main()
{
long long m,n;
int t;
scanf("%d",&t);
//std::vector<long long> v;
sieve(100000);
while(t--)
{
	scanf("%lld%lld",&m,&n);	
	segmentedsieve(m,n);
	/*for(i=0;i<v.size();i++)
	{
		if(v[i]>=m && v[i]<=n)
			printf("%lld\n",v[i]);
		if(v[i]>n)
			break;
	}*/
	printf("\n");
}
return 0;
}