// To implement modular exponentiation
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long modularExponentiation(long long x, long long n, long long M)
{
	if(n==0)
		return 1;
	long long result=1;
	while(n>0)
	{
		if(n%2)
		{
		result=(result*x)%M;
		n=n-1;
		}
		x=(x*x)%M;
		n/=2;
	}
	return result;
}

long long GCD(long long a, long long b)
{
	if(b==0)
		return a;
	return GCD(b,a%b);
}

long long gcdExtended(long long a ,long long b, long long *x, long long *y)
{
	if(b==0)
	{
		*x=1;
		*y=0;
		return a;
	}
	long long x1,y1;
	long long g=gcdExtended(b,a%b,&x1,&y1);
	*x=y1;
	*y=x1-(a/b)*(y1);
	return g;
}

long long modularMultiplicativeInverse(long long a, long long m)
{
	long long x,y;
	long long g=gcdExtended(a,m,&x,&y);
	if(g!=1)
	{
		printf("Inverse does not exist\n");
		return 0;
	}
	return (x%m+m)%m;
}

//For prime M, inverse can be found out using Fermat's theorem

long long modInversePrime(long long a, long long m)
{
	long long res=modularExponentiation(a,m-2,m);
	return res;
}

//Precompute factorials and inverse factorials
long long fact[500005],invfact[500005];

void factorials()
{
long long int i;
fact[1]=1;fact[0]=1;
for(i=2;i<=500005;i++)
fact[i]=(fact[i-1]*i)%MOD;
}
void inversefactorials()
{
long long int i;
for(i=0;i<=500005;i++)
invfact[i]=modInversePrime(fact[i],MOD);	
}