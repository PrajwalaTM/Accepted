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
int main(){
ll n,q;
scanf("%lld%lld",&n,&q);
ll a[n],i;
for(ll i=0;i<n;i++)
scanf("%lld",&a[i]);
sort(a,a+n);
ll min=a[0],max=a[n-1];
while(q--)
{
ll t;
scanf("%lld",&t);
if(t>=min && t<=max)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
