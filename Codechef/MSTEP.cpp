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
 int t;
 sd(t);
 while(t--)
 {
     int n,i,j;sd(n);
     int a[n][n];
     map<int,pair<int,int> >m;
     fin(i,0,n-1)
     {
         fin(j,0,n-1)
         {sd(a[i][j]);
         m[a[i][j]]=mp(i+1,j+1);}
     }
     int ans=0;
     fin(i,1,n*n-1)
     {
      ans+=abs(m[i+1].first-m[i].first)+abs(m[i+1].second-m[i].second);
     }
     pd(ans);pn;
 }
 return 0;
}
