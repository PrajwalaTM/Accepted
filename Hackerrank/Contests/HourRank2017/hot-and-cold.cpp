#include<bits/stdc++.h>
using namespace std;

int main()
{
	int c1,c2,h1,h2;
	scanf("%d%d%d%d",&c1,&c2,&h1,&h2);
	int x=max(c1,c2);
	int y=min(h1,h2);
	if((y-x)>=0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}