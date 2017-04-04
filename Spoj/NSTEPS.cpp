#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y,ans;
		scanf("%d%d",&x,&y);
		if(x==y){
		if(x%2)
			ans=2*x-1;
		else
			ans=2*x;
		}
		else if (x==y+2)
		{
			if(!(x%2))
			ans=x+y;
			else
				ans=x+y-1;
		}
		else 
			ans=-1;

		if(ans!=-1)
			printf("%d\n",ans);
		else
			printf("No Number\n");
	}
}