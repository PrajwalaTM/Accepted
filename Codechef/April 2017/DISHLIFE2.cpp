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
		scanf("%lld",&num);
		i=0,j=0;
		while(1)
		{
		scanf("%lld",&x);
		if(!count[x])
		{count[x]++;change[j]++;}
		i++;
		if(i==num)
		{i=0;j++;
		if(j==n)
			break;
		scanf("%lld",&num);}
		}
		for(i=1;i<=k;i++)
		{
			if(count[i]==0)
				{printf("sad\n");break;}
		}
		if(i==k+1)
		{
			for(j=0;j<n;j++)
			{
				if(change[j]==0)
				{
					printf("some\n");break;
				}
			}
			if(j==n)
				printf("all\n");
		}
	}
	return 0;
}