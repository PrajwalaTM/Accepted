//http://www.spoj.com/problems/ACODE/
#include <bits/stdc++.h>
using namespace std;

int decodings(char st[],int n)
{
	if(n==0 || n==1)
	return 1;

	if(st[n-2]<='2' && st[n-2]>='1' && st[n-1]<='6')
		return decodings(st,n-2)+decodings(st,n-1);
	else
		return decodings(st,n-1);	
}
int decodings1(char st[],int n)
{
	int dp[n+1],i;
	dp[0]=1;
	if (st[0]>='1' && st[0]<='2' && st[1]=='0')
	 	dp[1]=1;
	else if(st[0]>='3' && st[1]=='0')
	dp[1]=0;
	else if(st[0]<='2' && st[0]>='1' && st[1]<='6')
	dp[1]=2;
	else
	dp[1]=1;

	for(i=2;i<n;i++)
	{
	 if(st[i-1]<='2' && st[i-1]>='1' && st[i]<='6' && st[i]>='1' && st[i+1]!='0')
	 	dp[i]=dp[i-1]+dp[i-2];
	 else if (st[i-1]>='3' && st[i]=='0' || st[i]=='0' && st[i-1]=='0')
	 	{dp[i]=0;dp[n-1]=0;break;}
	 else if (st[i-1]>='1' && st[i-1]<='2' && st[i]=='0')
	 	dp[i]=dp[i-2];
	 else
	 	dp[i]=dp[i-1];	
	}
	return dp[n-1];
}
int main()
{
	while(1)
	{
		char st[5005];
		scanf("%s",st);
		if(!(strcmp(st,"0")))
			break;
		int l=strlen(st);
		//cout<<l;
		int ans=decodings1(st,l);
		printf("%d\n",ans);
	}
	return 0;
}