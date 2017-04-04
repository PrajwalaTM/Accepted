#include <bits/stdc++.h>
using namespace std;

int main()
{
	long t,n,i;
	scanf("%ld",&n);
	scanf("%ld",&t);
	long a[n];
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    long l=0,r=0,ans,sum;sum=0;
    ans=0;
    while(l<n)
    {
        while(r<n && sum+a[r]<=t)
        {
        	sum+=a[r];
        	r++;
        }
        ans=max(ans,r-l);
        sum-=a[l];
        l++;
    }
        printf("%ld\n",ans);
        return 0;
}