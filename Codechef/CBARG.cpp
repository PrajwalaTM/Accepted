#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 long long int t,n,i;
 scanf("%lld",&t);
 while(t--)
 {
  scanf("%lld",&n);
  long long int m=0,sum=0,arr[n];
  for(i=0;i<n;i++)
  scanf("%lld",&arr[i]);
  for(i=0;i<n;i++)
  {
    if(arr[i]>m)
        {
            sum=sum+arr[i]-m;
            m=arr[i];
        }
    else if(arr[i]<m)
        m=arr[i];
 
  }
  printf("%lld\n",sum);
 }
 return 0;
}
 
