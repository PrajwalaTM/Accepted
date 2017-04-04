#include <bits/stdc++.h>
using namespace std;
long long k;
void swap(long long A[],long long i,long long j)
{
	long long temp;
	temp=A[i];
     A[i]=A[j];
    A[j]=temp;
}
long long partition(long long start,long long end,long long A[])
{
	long long i,j,piv;
	i=start+1;
	piv=A[start];
	for(j=start+1;j<=end;j++)
	{
		if(A[j]%k<piv%k)
		{
         swap(A,i,j);
         i++;
		}
	}
	swap(A,start,i-1);
	return i-1;
}
void quicksort(long long A[],long long start,long long end,long long n)
{
	if(start<end){
	long long int piv=partition(start,end,A);
	quicksort(A,start,piv-1,n);
	quicksort(A,piv+1,end,n);
}
}
int main()
{
	long long n;
	scanf("%lld%lld",&n,&k);
	long long a[n],i;
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	quicksort(a,0,n-1,n);
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
}