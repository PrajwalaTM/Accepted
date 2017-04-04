#include <bits/stdc++.h>
using namespace std;

int lis(int a[],int n)
{
	int _lis[n+1],i,j;
	for(i=0;i<n;i++)
		_lis[i]=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j] && _lis[i]<_lis[j]+1)
				_lis[i]=_lis[j]+1;
		}
	}
	int m=0;
	for(i=0;i<n;i++)
	{
		if(m<_lis[i])
			m=_lis[i];
	}
	return m;
}

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Length of lis is %d\n", lis( arr, n ) );
    return 0;
}