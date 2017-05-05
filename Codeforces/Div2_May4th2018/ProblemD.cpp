#include <bits/stdc++.h>
using namespace std;
# define MOD 1000000007
int main()
{
char str[1000005];
scanf("%s",str);
long long int prev=0,ans=0,b_count=0,i,len;
len=strlen(str);
for(i=len-1;i>=0;i--)
{
	if(str[i]=='b')
		b_count++;
	else
	{
		prev=((prev*2)%MOD+b_count%MOD)%MOD;
		ans=(ans+prev)%MOD;
		b_count=0;
	}
}
printf("%lld\n",ans);
return 0;
}