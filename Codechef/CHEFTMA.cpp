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
    ll n,m,k;
    slld(n);slld(m);slld(k);
    ll a[n],b[n],c[k],d[m],e[k+m];
    for(ll i=0;i<n;i++)
    slld(a[i]);
    for(ll i=0;i<n;i++)
    slld(b[i]);
    for(ll i=0;i<k;i++)
    {slld(c[i]);e[i]=c[i];}
    for(ll i=0;i<m;i++)
    {slld(d[i]);e[i+m]=d[i];}
    ll diff[n];
    for(ll i=0;i<n;i++)
    diff[i]=a[i]-b[i];
    sort(diff,diff+n);
    sort(e,e+k+m);
    ll len=k+m;
    for(ll i=0;i<n;i++)
    {
    for(ll j=len-1;j>=0;j--)
    {
    if((diff[i]-e[j])>=0 && e[j]!=-1)
    {diff[i]=diff[i]-e[j];e[j]=-1;}
    }
    }
    ll sum=0;
    for(ll i=0;i<n;i++)
    sum+=diff[i];
    plld(sum);pn;
    }
    return 0;}
