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
    ll n;
    slld(n);
    ll ndig=0,d,num;
    num=n;
    while(num>0)
    {
    ndig++;
    num/=10;
    }
    ll a[ndig];num=n;
    for(ll i=0;i<ndig;i++)
    {
    a[i]=num%10;
    num/=10;
    }
    ll fact=1,t,small=MOD,large=-1,j=1;
    for(ll i=1;i<=ndig;i++)
    fact*=i;
    for(ll i=0;i<fact;i++)
    {
    if(j%ndig==0)
    {
    j++;}
    swap(a[j%ndig -1],a[j%ndig]);
    j++;
    t=1,num=0;
    for(ll k=ndig-1;k>=0;k--)
    {num+=a[k]*t;t*=10;}
    if(num%8==0)
    {
    if(num<small)
    small=num;
    if(num>large)
    large=num;
    }
    }
    if(small==MOD || large==-1)
    {printf("-1");}
    else
    {
    plld(small);ps;plld(large);}
    pn;
    }
    return 0;
    }
