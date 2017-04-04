#include <bits/stdc++.h>
using namespace std;

int coinchange(int s[],int m,int n)
{
	int dp[n+1][m],x,y;
	int i,j;
	for(i=0;i<m;i++)
		dp[0][i]=1;

	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i>=s[j])
			x=dp[i-s[j]][j];
			else
			x=0;
			if(j>=1)
			y=dp[i][j-1];
			else
			y=0;
			dp[i][j]=x+y;
		}
	}
	return dp[n][m-1];
}
int main()
{
    int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 4;
    printf(" %d ", coinchange(arr, m, n));
    return 0;
}