#include <bits/stdc++.h>
using namespace std;

void checkPrime(long long N)
{
	long long i,count=0;
	for(i=1;i*i<=N;i++)
	{
		if(N*i==0)
		{
			if(i*i==N)
			count++;
			else
			count+=2;
		}
	}
	if(count==2)
		printf("Number is prime\n");
	else
		printf("Number is composite\n");
}

void sieveOfEratosthenes(long long N)
{
	bool isPrime[N+1];
	long long i,j;
	for(i=0;i<N;i++)
		isPrime[i]=true;
	isPrime[0]=false;
	isPrime[1]=false;
	for(i=2;i*i<=N;i++)
	{
		if(isPrime[i]==true)
		{
			for(j=i*i;j<=N;j+=i)
				isPrime[j]=false;
		}
	}
}

// Factorisation
std::vector<long long> res;
void factoriseN(long long N)
{
	long long i=2;
	for(i=2;i*i<=N;i++)
	{
		while(!(N%i))
		{
		res.push_back(i);	
		N/=i;
		}
	}
	if(N!=1)
		res.push_back(N);
}

// For efficient factorisation in O(log N) when N is such that an array of size N is possible to be created
long long minPrime[N+1];
std::vector<long long> factors;
void calculateMinPrime(long long N)
{
	long long i,j;
	for(i=0;i<N;i++)
		minPrime[i]=0;
	for(i=2;i*i<=N;i++)
	{
		if(minPrime[i]==0)
		{
			for(j=i*i;j<=N;j+=i)
				minPrime[j]=i;
		}
	}
	for(i=2;i*i<=N;i++)
	{
		if(minPrime[i]==0)
			minPrime[i]=i;
	}
}

void factorise(long long N)
{
while(N!=1)
{
factors.push_back(minPrime[N]);
N/=minPrime[N];
}
}