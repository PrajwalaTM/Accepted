#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,v,u,x;
		scanf("%lld",&n);
		long long p[n],i,j,ans=0;
		std::vector<long long> vec;
		for(i=0;i<n;i++)
			scanf("%lld",&p[i]);
		map<long long, std::vector<long long> > m;
		map<long long, std::vector<long long> > ::iterator it;
		for(i=0;i<n-1;i++)
		{
		scanf("%lld%lld",&v,&u);
		m[u].push_back(v);
		m[v].push_back(u);
		}
		for(it=m.begin();it!=m.end();it++)
		{
			x=it->first;
			vec=it->second;
			ans=0;
			for(i=0;i<n;i++)
			{
			if(find(vec.begin(),vec.end(),i+1)==vec.end() && (i+1)!=x)
			if(p[i]>ans)
			{ans=p[i];j=i+1;}	
			}
			printf("%lld ",j);
		}
		printf("\n");
	}
}