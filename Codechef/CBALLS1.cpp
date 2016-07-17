#include <bits/stdc++.h>
using namespace std;
bool prime[10003];
void SieveOfEratosthenes(long long n)
{
    memset(prime, true, sizeof(prime));
    for (long long  p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (long long i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
int main()
{

    int t,n;
    scanf("%d",&t);
    SieveOfEratosthenes(10002);
    vector<int >v;
    v.push_back(2);
    for(int i=3;i<=10002;i++)
        {
            if(prime[i]==true)
                v.push_back(i);
    }
      while(t--)
        {
            int a[10002];
            scanf("%d",&n);
            for(int i=1;i<=n;i++)
                scanf("%d",&a[i]);
             long long ans=0;
             long long sum=0;
             long long min=INFINITY;
             if(a[1]==1)
             {
                 a[1]=2;
                 ans=ans+1;
             }

             for(int i=2;i<=n;i++)
                 {
                     if(a[i]<a[i-1])
                         {
                             ans=ans+a[i-1]-a[i];
                             a[i]=a[i-1];
                     }
             }
             sum=ans;

             for(int i=0;i<v.size();i++)
                 {
                 for(int j=1;j<=n;j++)
                 {
                     if(a[j]%v[i]!=0)
                     sum=sum+(v[i]-(a[j]%v[i]));
             }
                 if(sum<min)
                     min=sum;
                  sum=ans;
    }
    printf("%lld\n",min);
    }
}

