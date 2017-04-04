#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int n;
	scanf("%ld",&n);
	long int a[n],i;
	set<long>s;
	for(i=0;i<n;i++)
		{
		scanf("%ld",&a[i]);
		s.insert(a[i]);
	}
	long l=0,r=0,d,ans=0;
	d=s.size();
	s.clear();
	map<long,long>m;
	/*for(l=0;l<n;l++)
	{
		s.clear();
	 for(r=l;r<n;r++)
	 {
	 	s.insert(a[r]);
	 	if(s.size()==d)
	 		ans++;
	 	if(s.size()>d)
	 	{
	 	 break;s.clear();
	 	}
	 }
	}*/
	 while(l<n)
	 {
	 	r=max(l,r);
	 	while(r<n && s.size()<d)
	 	{
	 	s.insert(a[r]);
	 	m[a[r]]++;
	 	r++;	 	
	 	}
	 	if(s.size()==d)
	 		ans+=n-r+1;
	 	if(m[a[l]]==1)
	 		s.erase(a[l]);
	 	m[a[l]]--;
	 	l++;	 	
	 }
	printf("%ld\n",ans);
	return 0;
}