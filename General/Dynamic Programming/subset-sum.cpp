#include <bits/stdc++.h>
using namespace std;

int subsetsum(int set[],int n,int sum)
{
int dp[sum+1][n+1],i,j;
for(i=0;i<=n;i++)
	dp[0][i]=1;
for(i=1;i<=sum;i++)
	dp[i][0]=0;

for(i=1;i<=sum;i++)
{
	for(j=1;j<=n;j++)
	{
		dp[i][j]=dp[i][j-1];
		if(i>=set[j-1])
		{
			dp[i][j]=dp[i][j] || dp[i-set[j-1]][j-1];
		}
	}
}
return dp[sum][n];
}
int main()
{
	int set[] = {3, 34, 4, 12, 5, 2};
  int sum = 9;
  int n = sizeof(set)/sizeof(set[0]);
  if (subsetsum(set, n, sum) == true)
     printf("Found a subset with given sum\n");
  else
     printf("No subset with given sum");
  return 0;
}