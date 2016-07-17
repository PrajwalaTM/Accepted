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
    ll arr[10005];
    memset(arr,0,sizeof(arr));
    for (ll i = 2; i<=10002;i++)
    {
     for (ll j = i * i; j <=10002; j+=i)

        {

            arr[j - 1] = 1;

        }

    }
    vector<ll>v;
    for(ll i=2;i<=10002;i++)
    {
    if(!arr[i-1])
    v.push_back(i);
    }
    while(t--)
    {
    ll n;
    slld(n);
    ll a[n];
    for(ll i=0;i<n;i++)
    slld(a[i]);
    ll rem,sum=0,msum=MOD;
    if(a[0]==1)
    {a[0]=2;sum++;}
    for(ll i=1;i<n;i++)
    {
    if(a[i]<a[i-1])
    {
    sum+=a[i-1]-a[i];
    a[i]=a[i-1];
    }
    }
    ll sum1=0;
    for(ll i=0;i<v.size();i++)
    {
    sum1=0;
    for(ll j=0;j<n;j++)
    {
    rem=a[j]%v[i];
    if(rem)
    rem=v[i]-rem;
    //printf("Dividing by %lld, and answer is %lld ",i,rem);pn;
    sum1+=rem;
    }
    if(sum1<msum)
    msum=sum1;
    }
    msum+=sum;
    plld(msum);pn;
    }
    return 0;
    }
