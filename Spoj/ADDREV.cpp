#include <bits/stdc++.h>
using namespace std;

long int reverse(long int num)
{
	long int n=num,rev=0;
	while(n>0)
	{
     rev=rev*10+(n%10);
     n/=10;
	}
 return rev;
}

int main()
{
long int t;
scanf("%ld",&t);

while(t--)
{
	long int n1,n2,m1,m2,sum;
	scanf("%ld%ld",&n1,&n2);
    m1=reverse(n1);
    m2=reverse(n2);
    sum=m1+m2;
    printf("%ld\n",reverse(sum));
}
return 0;
}