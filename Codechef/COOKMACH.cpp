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
 sd(t);
 while(t--)
 {
  ll a,b,temp;
  slld(a);
  slld(b);
  ll ans;
  ans=0;
  if(a==b)
        ans=0;
else
{while(log2(a)!=(int)log2(a))
    {
     if(a%2==0)
     a/=2;
     else
        a=(a-1)/2;
     ans++;
    }
    if(a>b)
    {
     temp=a;
     a=b;
     b=temp;
    }
    while(a!=b)
    {
        a=a<<1;
        ans++;
    }
}
plld(ans);
  pn;
 }
    return 0;
}
 
