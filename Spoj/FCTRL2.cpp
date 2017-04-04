#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	scanf("%d",&t);
	int a[2000];
	while(t--)
	{
		scanf("%d",&n);
		int x,i=0,j;
		int temp=0,m;
		m=1;
		a[0]=1;
		for(i=2;i<=n;i++)
		{
			for(j=0;j<m;j++)
			{
			x=a[j]*i+temp;
			a[j]=x%10;
			temp=x/10;
			}
			while(temp)
			{
			a[m]=temp%10;
			temp/=10;
			m++;
			}
		}
		for(i=m-1;i>=0;i--)
			printf("%d",a[i]);
		printf("\n");

	}
	return 0;
}