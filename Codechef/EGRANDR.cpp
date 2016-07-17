#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

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
ll a[n],i;
for(i=0;i<n;i++)
slld(a[i]);
int flag=0,flag2=1;
for(i=0;i<n;i++)
{
if(a[i]==5)
flag=1;
if(a[i]==2)
{flag2=0;break;}
}
ll sum=0;
if(flag && flag2)
{
for(i=0;i<n;i++)
sum+=a[i];
sum=sum/n;
if(sum>=4)
printf("Yes\n");
else
printf("No\n");
}
else
printf("No\n");
}
return 0;
}
