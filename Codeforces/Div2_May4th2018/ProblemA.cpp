#include <bits/stdc++.h>
using namespace std;

int main()
{
long long l,r,i,ans1=0,ans2=0;
scanf("%lld%lld",&l,&r);
ans1=r/2-l/2;
if(l%2==0)
ans1++;
ans2=r/3-l/3;
if(l%3==0)
ans2++;
if(l==r)
printf("%lld\n",l);
else if(ans1>=ans2)
printf("2\n");
else
printf("3\n");
return 0;
}