#include <bits/stdc++.h>
using namespace std;

// Space and time efficient way to compute nCk
int nCk(int n, int k)
{
	int res=1,i;
	for(i=0;i<k;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
return res;
}

//To compute all values from 1C0 to nCk in O(n^2) time and space
int nCk_dp(int n,int k)
{
	int dp[n+1][k+1];
	int i,j;
	dp[0][0]=1;
	for(i=1;i<=n;i++)
	{
		dp[i][0]=1;
		for(j=1;j<=i;j++)
			dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
	}
	return dp[n][k];
}

// To compute the nth catalan number
// Ex: No of BSTs possible for a given number of keys N
int catalan(int n)
{
	int catalan[n+1],i;
	catalan[0]=1;
	catalan[1]=1;
	for(i=2;i<=n;i++)
		{
		catalan[i]=0;
		for(j=0;j<i;j++)
			catalan[i]+=catalan[j]*catalan[i-1-j];
	}
	return catalan[n];
}