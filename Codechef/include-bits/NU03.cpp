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
ll func(char str[],ll n)
{
 if(n==1)
        return 0;
 if(str[n-1]!=str[n-2])
    return func(str,n-1);
 return 1+func(str,n-1);
}
int main()
{
    int t;
    sd(t);
    while(t--)
    {
        char str[100005];
        scanf("%s",str);
        ll len=strlen(str);
        ll x=func(str,len);
        plld(x);pn;
    }
    return 0;
}
