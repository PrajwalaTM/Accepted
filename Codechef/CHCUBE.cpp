#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int t,flag=0;
 scanf("%lld",&t);
 while(t--)
 {
  string str;
  flag=0;
  int check=0;
  vector<string>v;
  for(int i=0;i<6;i++)
        {
            cin>>str;
            v.push_back(str);
        }
  int i;
  for(i=0;i<6;i++)
  {
   if(count(v.begin(),v.end(),v[i])>=3)
        {
         check=1;
         break;
        }
  }
  int k=0;
 if(check==1)
  {
 
   pair<int,int>a[3];
   a[0].first=1;
   a[0].second=2;
   a[1].first=3;
   a[1].second=4;
   a[2].first=5;
   a[2].second=6;
   for(int j=0;j<3;j++)
   {
     if(!(v[a[j].first-1]==v[i] || v[a[j].second-1]==v[i]))
     {check=0;break;}
   }
  }
 
 
 if(check==0)
    printf("NO\n");
    else
        printf("YES\n");
    v.clear();
}
return 0;
 
 
 }
 
 
 
