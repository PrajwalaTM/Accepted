#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,c,d,l;int flag;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&c,&d,&l);
		flag=-1;
		if(c>=2*d)
		{
		if(l%4==0 && l<=(4*(c+d)) && l>=(4*(c-d)))
			flag=1;
		else
			flag=0;
		}
		else
		{
			if(l%4==0 && l<=(4*(c+d)) && l>=4*d)
				flag=1;
			else
				flag=0;
		}
		if(flag)
			printf("yes\n");
		else
			printf("no\n");

	}
	return 0;
}