#include <bits/stdc++.h>
using namespace std;


int main() 
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
arr[i]=i+1;
do
{
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}while(next_permutation(arr,arr+n));
return 0;
}
