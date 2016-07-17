#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000000007

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

ll fast_pow(long long base, long long n,long long M) 
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
ll findMMI_fermat(ll n,ll M)
{
    return fast_pow(n,M-2,M);
}
ll func(ll n,ll k) {
ll m=max(n,k);
ll sum,i,dp[m+1];
if(!(k%2))
{
dp[0]=1;sum=1;
for(i=2;i<=k && i<=n;i+=2)
{dp[i]=((((((n-i+1)%MOD)*((n-i+2)%MOD))%MOD*(dp[i-2]))%MOD)%MOD*(findMMI_fermat((i*(i-1))%MOD,MOD))%MOD)%MOD;sum=(sum+dp[i])%MOD;}
}
else
{
dp[1]=n;sum=n;
for(i=3;i<=k && i<=n;i+=2)
{dp[i]=((((((n-i+1)%MOD)*((n-i+2)%MOD))%MOD*(dp[i-2]))%MOD)%MOD*(findMMI_fermat((i*(i-1))%MOD,MOD))%MOD)%MOD;sum=(sum+dp[i])%MOD;}
}
return sum;
}
ll func2(ll n,ll k,ll count)
{
ll n1=n-count;ll m;
//printf("%lld ",n1);
m=max(k,n1);
ll sum=1,i,dp[m+1];
dp[0]=1;
for(i=1;i<=k && i<=n1;i++)
{
dp[i]=((((n1-i+1)%MOD*dp[i-1]%MOD)%MOD)*findMMI_fermat(i,MOD)%MOD)%MOD;
//printf("%lld %lld\n",dp[i],sum);
sum=(sum+dp[i])%MOD;
}
return sum;
}
int main()
{
ll t;
slld(t);
while(t--)
{
ll n,k,count=0;
slld(n);slld(k);
ll a[n];
for(ll i=0;i<n;i++)
{
slld(a[i]);
if(!a[i])
count++;
}
ll ans;
if(!count)
 ans=func(n,k);
else
 ans=func2(n,k,count);
printf("%lld\n",ans);
}
return 0;
}

