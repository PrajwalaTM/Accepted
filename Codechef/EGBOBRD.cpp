#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
 long long n,k,rem,ans;
 scanf("%lld%lld",&n,&k);
 long long a[n];
 for(long long i=0;i<n;i++)
scanf("%lld",&a[i]);
rem=k;
ans=1;
//ans=ceil((float)a[0]/k);
for(long long int i=0;i<n;i++)
 {
  if(rem==0)
    {rem=k;ans++;}
  if(a[i]==rem || a[i]==rem-1)
   {rem=0;
   }
   else if(a[i]<rem-1)
    {rem=rem-a[i]-1;
   }
   else if(a[i]>rem)
   {
    a[i]=a[i]-rem;
     ans+=ceil((float)a[i]/k);
     if(a[i]%k==0)
        rem=0;
     else
     rem=k-a[i]%k-1;
