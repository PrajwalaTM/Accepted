#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n,m;
 scanf("%d",&n);
 int a[n],i,j;
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
scanf("%d",&m);
int b[m];
for(i=0;i<m;i++)
	scanf("%d",&b[i]);
sort(a,a+n);
sort(b,b+m);
i=0;j=0;int ans=0;
while(i<n && j<m)
{
	if(abs(a[i]-b[j])<=1)
     {
     ans++;i++;j++;
     }
     else if

}