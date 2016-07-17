#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000000007

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

ll fun(ll a[],ll b[], ll n, ll i)
{
if(n==1)
return a[0]+b[0];
if(i>=n)
return 0;
ll ans=-1;
if(i==0)
{
ll x,y;
a[0]+=b[0];
x=fun(a,b,n,i+1);
a[0]-=b[0];
a[1]+=b[0];
y=fun(a,b,n,i+1);
a[1]-=b[0];
if(x!=-1)
ans=x;
if(y!=-1)
ans=max(ans,y);
}
else if(i==n-1)
{
a[n-1]+=b[n-1];
int flag=1;
for(ll j=0;j<n-1;j++)
{
if(a[j]!=a[j+1])
{flag=0;break;}
}
if(flag)
ans=a[0];
flag=1;
a[n-1]-=b[n-1];
if((n-2)>=0)
{
a[n-2]+=b[n-1];
for(ll j=0;j<n-1;j++)
{
if(a[j]!=a[j+1])
{flag=0;break;}
}
a[n-2]-=b[n-1];
if(flag)
ans=max(ans,a[0]);
}
}
else
{
ll x,y,z;
if(i>=1 && i<n-1)
{
a[i-1]+=b[i];
x=fun(a,b,n,i+1);
a[i-1]-=b[i];
a[i]+=b[i];
y=fun(a,b,n,i+1);
a[i]-=b[i];
a[i+1]+=b[i];
z=fun(a,b,n,i+1);
a[i+1]-=b[i];
if(x!=-1)
ans=x;
if(y!=-1)
ans=max(y,ans);
if(z!=-1)
ans=max(ans,z);
}
}
return ans;
}
int main()
{
int t;
sd(t);
while(t--)
{
ll n;
slld(n);
ll a[n],b[n],i;
for(i=0;i<n;i++)
slld(b[i]);
for(i=0;i<n;i++)
slld(a[i]);
ll ans=fun(a,b,n,0);
printf("%lld\n",ans);
}
}
