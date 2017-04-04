//http://www.spoj.com/problems/SAMER08F/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans;
	while(1)
	{
	scanf("%d",&n);
	if(!n)
		break;
	ans=n*(n+1)*(2*n+1)/6;
	printf("%d\n",ans);
	}
	return 0;
}