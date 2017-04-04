#include <bits/stdc++.h>
using namespace std;

long int count(string s)
{
	long int len=s.size(),i,count=0;
	for(i=0;i<len;i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			count++;
	}
	return count;

}
int main()
{
	int t;
	string s;
	scanf("%d",&t);
	while(t--)
	{
		cin>>s;
		//sort(s.begin(),s.end());
		long int x=count(s);
		printf("%ld\n",x);
	}
	return 0;
}