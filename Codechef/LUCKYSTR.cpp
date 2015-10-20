#include<bits/stdc++.h>
using namespace std;
int func(long long int num)
{
 int f=0,check=0;
 while(num>0)
  {
    if(num%10!=0)
      {
       check=1;break;
      }
    num/=10;
  }
  if(check==1 && num%10==5)
    f=1;
    return f;
 
}
int main()
{
long long int n,x,num;
scanf("%lld",&n);
int f=0,check;
for(long long i=0;i<n;i++)
{
 scanf("%lld",&x);
 f=0;check=0;
 if(x%10==5 || x%10==0)
    f=1;
if(f==1)
 {
  while(func(x))
  {
      x=x*4;
  }
 }
 printf("%lld\n",x);
}
return 0;
}
