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
        ll n;
        slld(n);ll w[n+1],_max=0;
        char corr[n],chef[n];ll c1=0,c2=0;
        scanf("%s",corr);
        scanf("%s",chef);
 
    for(ll i=0;i<=n;i++)
            slld(w[i]);
 
 
            for(ll i=0;i<n;i++)
            {if(corr[i]==chef[i])
                {c1++;}
            else
                {c2++;}
            }
 
        _max=w[c1];
        ll i=0,ans=c1;
        if(c2)
        {while(1)
        {
         if(w[c1]>_max)
               {ans=c1;_max=w[c1];}
         c1--;
             if(c1<0)
                break;
 
        }
        }
        plld(_max);pn;
    }
 
 
 
    return 0;
}
