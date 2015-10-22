#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)
#define sllf(a) scanf("%llf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pllf(a) printf("%llf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back
int main()
{
	int t;
	sd(t);
	while(t--)
	{
	int x,y,n,w,_p1,_p2;
	sd(x);sd(y);sd(n);sd(w);sd(_p1);sd(_p2);
	double dp[n+1][w+1];
	double p1=0.01*_p1, p2=0.01*_p2;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		dp[i][j]=0.0;
	}
	for(int i=0;i<=n;i++)
	dp[i][0]=1.0;
	for(int i=1;i<=w;i++)
	dp[0][i]=0.0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			dp[i][j]=max((dp[i-1][j]*(1-p1)+dp[i-1][max(j-x,0)]*p1),(dp[i-1][j]*(1-p2)+dp[i-1][max(j-y,0)]*p2));
		}
	}
	printf("%0.6f\n",dp[n][w]*100);
	}
    return 0;
}


 
