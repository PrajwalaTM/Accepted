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
    ll n,i,j;
    slld(n);
    ll a[n+1],sum=0,temp[n+1],p[n+1];
    for(i=0;i<=n;i++)
    slld(a[i]);
    temp[0]=a[0],p[0]=1;
    for(i=1;i<=n;i++)
    p[i]=(p[i-1]*2)%MOD;
    for(i=1;i<=n;i++)
    {
    temp[i]=(temp[i-1]%MOD+(p[i-1]*a[i])%MOD)%MOD;
    }
    for(i=1;i<=n;i++)
    sum=((sum)%MOD + ((a[i]*temp[i-1])%MOD *p[n-i+1])%MOD)%MOD;
    plld(sum);pn;
    }
return 0;
}

