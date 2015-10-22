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
ll dp[1000001];
int main()
{
	ll t;
	slld(t);
	dp[0]=0;dp[1]=1;
	dp[2]=2;
	for(ll i=3;i<=1000000;i++)
	dp[i]=(dp[i-1]+(dp[i-2]*(i-1)))%MOD;
	while(t--)
	{
	ll n;
	slld(n);
	plld(dp[n]);
	pn;
	}
    return 0;
}
