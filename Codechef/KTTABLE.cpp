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
     int t;
     scanf("%d",&t);
     while(t--)
{
ll n;
scanf("%lld",&n);
ll a[n],b[n];
for(ll i=0;i<n;i++)
scanf("%lld",&a[i]);
for(ll i=0;i<n;i++)
scanf("%lld",&b[i]);
ll count=0;
for(ll i=0;i<n;i++)
{
if(i==0)
{
if((a[0]-0)>=b[0])
count++;
}
else if((a[i]-a[i-1])>=b[i])
count++;
}
printf("%lld\n",count);
}
return 0;
}
