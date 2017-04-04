#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int k;
	cin>>s;
	scanf("%d",&k);
	string suffixes[26];
	int len=s.length(),i;
	for(i=0;i<len;i++)
		suffixes[i]=s.substr(i);
	sort(suffixes,suffixes+len);
		cout<<suffixes[k-1]<<endl;
}