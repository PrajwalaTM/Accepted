#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,m,i,k,s;int f=0;
		scanf("%lld%lld",&n,&m);		
		k=1;
		for(k=0;k<=m;k++)
		{
			s=sqrt(n+m*k);
			if(((s*s)-n)%m==0)
			{
				printf("%lld\n",s);
				f=1;break;
			}
		}
		if(!f)
			printf("-1\n");
	}
	return 0;
}