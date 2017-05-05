#include <stdio.h>

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

int main()
{
    //cout << "Hello World!" << endl;
    long long a,b,c,m;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&m);
    long long p=modularExponentiation(a,b,m);
   long long inv=modularMultiplicativeInverse(c,m);
    printf("%lld",(p*inv)%m);
    return 0;
}
