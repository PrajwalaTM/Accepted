#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,v,u,pos;
		scanf("%lld",&n);
		long long p[n],i,j,ans=0;
		std::vector<long long> vec;
		for(i=0;i<n;i++)
			scanf("%lld",&p[i]);
		long long m[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				m[i][j]=0;
		}
		for(i=0;i<n-1;i++)
		{
		scanf("%lld%lld",&v,&u);
		m[u-1][v-1]=1;
		m[v-1][u-1]=1;
		}
		for(i=0;i<n;i++)
		{
			ans=0;
		for(j=0;j<n;j++)
		{
			if(m[i][j]==0 && p[j]>ans && i!=j)
			{
				ans=p[j];pos=j+1;
			}
		}
		printf("%lld ",pos);	
		}
		printf("\n");
	}
}