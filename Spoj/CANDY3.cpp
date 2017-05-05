//http://www.spoj.com/problems/CANDY3/
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		long long i,j,sum=0;
		for(j=0;j<n;j++)
		{
			scanf("%lld",&i);
			sum=(sum+i)%n;
		}
		if(!sum)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}