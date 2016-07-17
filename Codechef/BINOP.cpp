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
char A[1000005],B[1000005];ll A_1=0,A_0=0,B_1=0,B_0=0,x=0,y=0;
scanf("%s",A);
scanf("%s",B);
ll len=strlen(A),i=0,ans;
for(i=0;i<len;i++)
{
if(A[i]=='1')
A_1++;
else
A_0++;
if(B[i]=='1')
B_1++;
else
B_0++;
}
for(i=0;i<len;i++)
{
if(A[i]=='1' && B[i]=='0')
x++; 
else if(A[i]=='0' && B[i]=='1')
y++;
}
int flag=1;ans=0;
if(A_0 && A_1)
{
ans=max(x,y);
}
else
{
ans=strcmp(A,B);
if(ans!=0)
flag=0;
}
if(!flag)
printf("Unlucky Chef\n");
else
{
printf("Lucky Chef\n");
printf("%lld\n",ans);
}
}
return 0;
}
 
