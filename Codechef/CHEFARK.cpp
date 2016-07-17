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

ll func(ll A,ll k) {
    ll ans=0;
    ll sum[A+1][A+1],i,j;
    sum[0][0]=1;
    for(i=1;i<=A;i++)
    {
        sum[i][0]=1;
        for(j=1;j<i;j++)
        {
        sum[i][j]=(sum[i-1][j]+sum[i-1][j-1])%MOD;
        }
        sum[i][j]=1;
    }
   if(!(k%2))
 {
 for(i=0;i<=k && i<=A;i+=2)
    ans=(ans+sum[A][i])%MOD;
}
else
{
 for(i=1;i<=k && i<=A;i+=2)
    ans=(ans+sum[A][i])%MOD;
}
return ans;
}
ll func2(ll A,ll k,ll count)
{
ll ans=0;
    ll sum[A+1][A+1],i,j;
    sum[0][0]=1;
    for(i=1;i<=A;i++)
    {
        sum[i][0]=1;
        for(j=1;j<i;j++)
        {
        sum[i][j]=(sum[i-1][j]+sum[i-1][j-1])%MOD;
        }
        sum[i][j]=1;
    }

 for(i=0;i<=k && i<=(A-count);i++)
    ans=(ans+sum[A-count][i])%MOD;

return ans;
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

