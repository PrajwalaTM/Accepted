#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long fact[500005],invfact[500005];
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
		}
		x=(x*x)%M;
		n/=2;
	}
	return result;
}

long long modInversePrime(long long a, long long m)
{
	long long res=modularExponentiation(a,m-2,m);
	return res;
}
long long compute(long long n,long long k)
{
return (((fact[n]*invfact[n-k])%MOD)*invfact[k])%MOD;
}

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

int main()
{
	int q;
	scanf("%d",&q);
	factorials();
	inversefactorials();
	while(q--)
	{
		char str[500005];
		scanf("%s",str);
		long long int l=strlen(str);
		long long int count[4],i,j;
		for(j=0;j<4;j++)
			count[j]=0;
		for(i=0;i<l;i++)
		{
		switch(str[i])
		{
		case 'a': count[0]++;break;
		case 'b': count[1]++;break;
		case 'c': count[2]++;break;
		case 'd': count[3]++;break;
		}
		}
		long long int x,y,n_a,n_b,n_c,n_d,res1=0,res2=0,res;
		x=min(count[0],count[1]);
		y=min(count[2],count[3]);
		n_a=count[0];n_b=count[1];n_c=count[2];n_d=count[3];
		for(i=1;i<=x;i++)
		res1=(res1+(compute(n_a,i)*compute(n_b,i))%MOD)%MOD;

		for(i=1;i<=y;i++)
		res2=(res2+(compute(n_c,i)*compute(n_d,i))%MOD)%MOD;

		res=((res1+res2)%MOD + (res1*res2)%MOD)%MOD;
		//printf("%lld %lld %lld \n", res1,res2,res);
		printf("%lld\n",res);
	}
	return 0;
}
