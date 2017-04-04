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
    ll a[n+1],sum=0;
    for(i=0;i<=n;i++)
    slld(a[i]);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i;j++)
    sum=(sum%MOD+(((ll)pow(2,n-i)*a[j])%MOD*a[j+i]%MOD)%MOD)% 1000000007;
    }
    for(i=1;i<=n;i++)
    sum=(sum%MOD+((a[0]*(ll)pow(2,n-i+1))%MOD *a[i])%MOD) % 1000000007;
    plld(sum);pn;
    }
return 0;
}
