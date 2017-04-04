// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/mike-and-gcd-issues/
// TLE For large cases

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	long long n;
	scanf("%lld",&n);
	long long a[n],i,j,dist,l[n],r[n],temp;
	dist=200005;
	for(i=0;i<n;i++)
	{
		l[i]=dist;
		r[i]=dist;
	}
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(__gcd(a[i],a[j])>1) 
				{
				r[i]=j;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
		     if(__gcd(a[i],a[j])>1) 
				{
				l[i]=j;
				break;
			}	
		}
	}
	for(i=0;i<n;i++)
	{
		//temp=min(l[i],r[i]);
		if(abs(l[i]-i)>abs(r[i]-i))
			temp=r[i];
		else
			temp=l[i];
		//printf("i=%lld l[i]=%lld r[i]=%lld ",i,l[i],r[i]);
		if(temp==dist)
			temp=-2;
		printf("%lld ",temp+1);
		//printf("\n");
	}
	return 0;
}