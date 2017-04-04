//http://www.spoj.com/problems/FASHION/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int w[n],m[n],i;
		for(i=0;i<n;i++)
			scanf("%d",&m[i]);
		for(i=0;i<n;i++)
			scanf("%d",&w[i]);
		int sum=0;
		sort(w,w+n);
		sort(m,m+n);
		for(i=0;i<n;i++)
			sum+=w[i]*m[i];
		printf("%d\n",sum);
	}
	return 0;
}