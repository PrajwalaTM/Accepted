//https://www.codechef.com/APRIL17/problems/SIMDISH
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		map<string,long long>m;
		string s;int count=0,i;
		for(i=0;i<8;i++)
		{
		cin>>s;
		m[s]++;
		}
		map<string,long long>::iterator it;		
		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second==2)
				count++;
		}
		if(count>=2)
			printf("similar\n");
		else
			printf("dissimilar\n");
	}
	return 0;
}
