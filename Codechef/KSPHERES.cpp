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
ll func(ll n,ll k,ll a[])
{
  if(n==0)
        return 0;
  if(k==0)
    return 1;
  return func(n-1, k,a) + a[n-1] * func(n-1, k-1,a);
}
 
 
 
 
ll fupp[100000];ll flow[100000];
int main()
{
    ll n,m,c;
    slld(n);
    slld(m);
    slld(c);
    ll upp[n],low[m];
 
   //map<ll,ll>x;
   //map<ll,ll> ::iterator it;
   ll m1=0,m2=0;
    for(ll i=0;i<n;i++)
        {
        slld(upp[i]);
        if(m1<upp[i])
            m1=upp[i];
        }
 
 
    memset(fupp,0,sizeof(fupp));
    for(ll i=0;i<m;i++)
       {
        slld(low[i]);
        if(m2<low[i])
            m2=low[i];
       }
 
     memset(flow,0,sizeof(flow));
     for(ll i=0;i<n;i++)
        fupp[upp[i]]++;
     for(ll i=0;i<m;i++)
        flow[low[i]]++;
        ll arr[100000],f[c+5],_m=max(m1,m2);
        //memset(arr,0,sizeof(arr));
        arr[0]=0;
     for(ll i=1;i<=_m;i++)
     {
       if(fupp[i] && flow[i])
           arr[i]=fupp[i]*flow[i];
 
           else
           arr[i]=0;
 
     }
     /*for(ll i=0;i<=_m;i++)
     {plld(arr[i]);ps;}*/
 
   // for(ll i=1;i<=c;i++)
     //   f[i]=func(_m+1,i+1,arr);
     //f[0]=1;
     //sort(arr,arr+c+1);
    for(ll i=0;i<c+5;i++)
        f[i]=0;
    f[0]=1;
    for(ll n=1;n<=_m;n++)
        {for (ll k=n;k >= 1; k--) {
            f[k] = (f[k] + arr[n] * f[k-1]) % 1000000007;
        }
    }
    for(ll i=2;i<=c+1;i++)
    {
        plld(f[i]);ps;
    }
    pn;
 
 
    return 0;
}
