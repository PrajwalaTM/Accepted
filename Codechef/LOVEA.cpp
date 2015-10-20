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
int func(ll i)
{
    ll x=(ll)(sqrt(i));
    ll y=x*x;
    if(y==i)
        return 1;
    else
        return 0;
}
int main()
{
    ll q;
    slld(q);
    while(q--)
    {
        ll k,r;
        slld(k);
        slld(r);
        ll i=1,ans=0;
        ll x=sqrt(k);
        ll y=sqrt(r);
        if(k==r && func(k))
            ans=1;
        else if(func(k))
            ans=y-x+1;
        else
            ans=y-x;
        plld(ans);
        pn;
    }
    return 0;
}
