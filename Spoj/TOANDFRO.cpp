//http://www.spoj.com/problems/TOANDFRO/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char string[205];
	while(1)
	{
	scanf("%d",&n);
	if(!n)
		break;
	scanf("%s",string);
	int l=strlen(string),count=1,pos=0,j=0,k,i;
	k=l/n;
	for(i=0;i<n;i++)
	{
		pos=i;
		j=0;
		while(1)
		{
			cout<<string[pos];
			j++;
			if(j==k)
				break;
			pos=(pos+2*n-(2*i+1))%l;
			cout<<string[pos];
			j++;
			pos=(pos+2*i+1)%l;
			if(j==k)
				break;
		}
	}
	printf("\n");
	}
	return 0;
}