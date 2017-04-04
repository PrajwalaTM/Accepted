//http://www.spoj.com/problems/ACPC10A/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a1,a2,a3,d,r,ans;
	while(1)
	{
		scanf("%d%d%d",&a1,&a2,&a3);
		if(a1==0 && a2==0 && a3==0)
			break;
		if((a2-a1)==(a3-a2))
		{
			d=a2-a1;
			ans=a3+d;
			printf("AP %d\n",ans);
		}
		else
		{
			if(a1 && a2 && (a3/a2)==(a2/a1))
			{
				r=a2/a1;
				ans=a3*r;
				printf("GP %d\n",ans);
			}
		}
	}
	return 0;
}