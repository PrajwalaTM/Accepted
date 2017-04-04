#include <bits/stdc++.h>
using namespace std;
long int minPrimeFactor[1000005],c[1000005];

void minprimefactor(long int n)
{
memset(minPrimeFactor,0,sizeof(minPrimeFactor));
memset(c,0,sizeof(c));
long int i,j;
for(i=2;i*i<=n;i++)
{
	if(minPrimeFactor[i]==0)
	{
		for(j=i;j<=n;j+=i)
		{
			if(minPrimeFactor[j]==0)
			{minPrimeFactor[j]=i;
			c[i]++;}
		}
	}
}
for(i=2;i<=n;i++)
{
if(minPrimeFactor[i]==0)
{minPrimeFactor[i]=i;c[i]=1;}
}
}
int main()
{
	long int t,x;
	scanf("%ld",&t);	
	minprimefactor(1000000);
	while(t--)
	{
		scanf("%ld",&x);
		long int i;
		printf("%ld\n",c[x]);
	}
	return 0;
}