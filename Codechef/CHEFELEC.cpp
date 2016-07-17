#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define MAX 100003
#define MOD 1000000007

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
int main()
{
ll t;
slld(t);
while(t--)
{
ll n;
slld(n);
char str[n+1];
ll i,dist[n],l,r;
scanf("%s",str);
for(i=0;i<n;i++)
slld(dist[i]);
ll sum=0;
ll m=0;int flag=0;
for(i=0;i<n;i++)
{
if(str[i]=='1')
{l=i;break;}
}
for(i=n-1;i>=0;i--)
{
if(str[i]=='1')
{r=i;break;}
}
for(i=0;i<n;i++)
{
if(str[i]=='0' && i<l)
sum+=dist[i+1]-dist[i];
else if(str[i]=='0' && i>r)
{
if(i!=(n-1))
sum+=dist[i+1]-dist[i];
}
else if(str[i]=='1')
{
sum-=m;
m=0;
if(i!=n-1)
{
m=max(m,dist[i+1]-dist[i]);
sum+=dist[i+1]-dist[i];
}
}
else
{
m=max(m,dist[i+1]-dist[i]);
sum+=dist[i+1]-dist[i];
}
}
printf("%lld\n",sum);
}
return 0;
}
