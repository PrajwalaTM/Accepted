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
ll k;
slld(k);
ll n=k-1,i=0;
ll result=0,t=1;
if(k==1)
result=0;
else
{while(n>0)  //number in base 10
{
  result = result+(n%5)*2*t;  //its not arithemtical "+" dont forget
  n = n/5;
  t=t*10;
}
}
printf("%lld\n",result);
}
return 0;
}
