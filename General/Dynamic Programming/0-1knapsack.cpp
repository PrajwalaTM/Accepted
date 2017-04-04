#include <bits/stdc++.h>
using namespace std;

int knapsack(int w[],int val[],int W,int n)
{
	int dp[W+1][n+1];
	int i,j;
	for(i=0;i<n;i++)
		dp[i][0]=0;
	for(i=0;i<n;i++)
		dp[0][i]=0;
	for(i=1;i<=W;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(w[j-1]<=i)
				dp[i][j]=max(dp[i-w[j]][j-1]+val[j],dp[i][j-1]);
			else
				dp[i][j]=dp[i][j-1];
		}
	}
	return dp[W][n];
}

int main()
{
int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapsack(wt, val, W, n));
}