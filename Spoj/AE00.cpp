//http://www.spoj.com/problems/AE00/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,ans=0;
	scanf("%d",&n);
	for(i=1;i<=sqrt(n);i++)
		{
		ans=ans+n/i;
		ans=ans-i+1;
		}
	printf("%d\n",ans);
}