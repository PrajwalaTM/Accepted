//https://www.codechef.com/APRIL17/problems/DISHLIFE
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n,k,i,j,num,x;
		scanf("%lld%lld",&n,&k);
		long long count[k+1],change[n+1];
		memset(count,0,sizeof(count));
		memset(change,0,sizeof(change));
		int flag=0,done=0,pos=-1;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&num);
			for(j=0;j<num;j++)
			{
				scanf("%lld",&x);
				if(!count[x])
				{count[x]++;change[i]++;}
			}
			flag=1;
			for(j=1;j<=k;j++)
				{
				if(count[k]==0)
					flag=0;
			}
			if(flag && !done)
			{
				done=1;
			}
		}
		if(!done)
		printf("sad\n");
		else
		{
				for(i=0;i<n;i++)
				{
					if(change[i]==0)
						{printf("some\n");break;}
				}
				if(i==n)
					printf("all\n");
		}
	}
	return 0;
}