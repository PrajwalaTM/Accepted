#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int compare(const void* a,const void* b)
{
    return (*(long long int*)a - *(long long int*)b);
}
long long int pow_mod(long long int base,long long int exp,long long int mod)
{
    if (exp == 0)
        return 1;
else if (exp%2 == 0) {
        long long int mysqrt = pow_mod(base, exp/2, mod);
        return (mysqrt*mysqrt)%mod;
    }
    else
        return (base*pow_mod(base, exp-1, mod))%mod;
}
int main()
{
int t,n,i;
long long int ans,a[100005];
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    qsort(a,n,sizeof(long long int),compare);
    ans=0;
    for(i=0;i<n;i++)
    {
        ans+=((pow_mod(2,i,1000000007)-pow_mod(2,n-1-i,1000000007))*a[i])%1000000007;
        ans%=1000000007;
    }
    printf("%lld\n",ans);
}
    return 0;
}
