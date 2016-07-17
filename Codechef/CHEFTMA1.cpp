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
    ll t;
    slld(t);
    while(t--)
    {
    ll n,m,k,val;
    slld(n);slld(m);slld(k);
    ll a[n],b[n],c[k],d[m];
    for(ll i=0;i<n;i++)
    slld(a[i]);
    for(ll i=0;i<n;i++)
    slld(b[i]);
    multiset<ll>diff,e;
    multiset<ll>::iterator it,low;
    for(ll i=0;i<k;i++)
    {
    slld(c[i]);
    e.insert(c[i]);
    }
    for(ll i=0;i<m;i++)
    {
    slld(d[i]);
    e.insert(d[i]);
    }
    for(ll i=0;i<n;i++)
    diff.insert(a[i]-b[i]);ll sum=0;
    for(it=diff.begin();it!=diff.end();it++)
    {
    low=e.lower_bound(*it);
    if(low!=e.begin())
    {
    if(*it == *low)
    {
    e.erase(low);
    }
    else
    {
    low--;
    sum+=(*it)-(*low);
    e.erase(low);
    }
    }
    else
    {
    if(*it == *low)
    e.erase(low);
    else
    {
    sum+=(*it);
    }
    }
    }
    plld(sum);pn;
    }
    return 0;
    }
