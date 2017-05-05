//http://www.spoj.com/problems/EIGHTS/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		long long k;
		scanf("%lld",&k);
		long long ans=192+(k-1)*250;
		printf("%lld\n",ans);
	}
	return 0;
}