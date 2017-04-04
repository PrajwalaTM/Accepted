#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t,n,num,ans,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans=0;
		k=5;
		num=n;
		while((num/k)!=0)
		{
        ans=ans+num/k;
        k=k*5;        
		}
		printf("%lld\n",ans);
	}
	return 0;
}