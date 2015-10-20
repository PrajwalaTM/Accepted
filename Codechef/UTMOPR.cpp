#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
 long long n,k,x;
 scanf("%lld%lld",&n,&k);
 vector<long long>v;
 vector<long long>:: iterator it;
 for(long long i=0;i<n;i++)
 {
scanf("%lld",&x);
 v.push_back(x);
}
 long long sum=0;
for(int i=0;i<v.size();i++)
        sum+=v[i];
if(k==1)
{
 if(sum%2==0)
        printf("odd\n");
 else
    printf("even\n");
}
else
    printf("even\n");
}
return 0;
}
