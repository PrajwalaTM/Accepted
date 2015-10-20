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
ll lis( ll arr[], ll n )
{
   ll m=arr[0],ans=0,c=1;
  for(ll i=1;i<n;i++)
  {
    if(arr[i]>=m)
    {
        m=arr[i];c++;
    }
    else
        {m=arr[i];ans+=(c*(c-1))-(c*(c-1)/2);
        c=1;}
  }
  ans+=(c*(c-1))-(c*(c-1)/2);
  return ans;
}
int main()
{
    int t;
    sd(t);
    while(t--)
    {
     ll n;
     slld(n);
     ll arr[n];
     for(ll i=0;i<n;i++)
            slld(arr[i]);
     ll ans=lis(arr,n);
     ans+=n;
     plld(ans);pn;
    }
    return 0;
}
