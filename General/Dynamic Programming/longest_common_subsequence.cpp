#include <bits/stdc++.h>
using namespace std;

int lcs(char *x,char *y,int m,int n)
{
int L[m+1][n+1],i,j;

for(i=0;i<=m;i++)
{
	for(j=0;j<=n;j++)
	{
		if(i==0 || j==0)
			L[i][j]=0;

		else if(x[i-1]==y[j-1])
			L[i][j]=L[i-1][j-1]+1;
		else
			L[i][j]=max(L[i-1][j],L[i][j-1]);
	
	}
}

return L[m][n];

}


int main()
{
 char X[] = "AGGTAB";
  char Y[] = "GXTXAYB";
  
  int m = strlen(X);
  int n = strlen(Y);
  
  printf("Length of LCS is %d\n", lcs( X, Y, m, n ) );

}
