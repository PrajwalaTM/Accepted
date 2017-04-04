#include <bits/stdc++.h>
using namespace std;
long long k1;
void merge(long long A[],long long start,long long mid,long long end)
{
	long long p=start,q=mid+1,i,j;
	long long temp[end-start+1],k=0;
	while(p<=mid && q<=end)
	{
		if(A[p]%k1<=A[q]%k1)
			{temp[k++]=A[p];p++;}
		else
			{temp[k++]=A[q];q++;}
	}
	while(p<=mid)
		{temp[k++]=A[p];p++;}
	while(q<=end)
		{temp[k++]=A[q];q++;}
	for(j=0;j<k;j++)
		A[start++]=temp[j];
}
void mergesort(long long A[],long long start,long long end)
{
	if(start<end)
	{
	long long mid=(start+end)/2;
	mergesort(A,start,mid);
	mergesort(A,mid+1,end);
	merge(A,start,mid,end);
	}
}
int main()
{
	long long n;
	scanf("%lld%lld",&n,&k1);
	long long a[n],i;
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
}