#include<stdio.h>
 
 
long int a[100000];
 
 
long int compare(const void * a, const void * b)
 
{
 
   return ( *(long int*)a - *(long int*)b );
 
}
 
int main()
 
 
 
{
 
 
 
long int n,i,ans=0;int t;
 
 
 
scanf("%d",&t);
 
 
 
while(t--)
 
 
 
{
 
 
ans=0;
scanf("%ld",&n);
 
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
 
 
 
qsort(a,n,sizeof(long int),compare);
 
 
 
for(i=1;i<n;i++)
 
 
 
ans=ans+a[i];
 
 
 
if(a[0]>=2)
 
 
 
ans=ans+2;
 
 
 
else
 
 
 
ans=-1;
 
 
 
printf("%ld\n",ans);
 
 
 
}
 
 
 
return 0;
 
