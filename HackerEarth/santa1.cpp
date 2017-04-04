#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<map>
#include<math.h>
#include<string.h>
using namespace std;
struct rdeer
{
  pair<long int,long int>d;
  string name;
};
struct comp {
    bool operator ()(struct rdeer const& a,struct rdeer const& b)
    {
        if(a.d.first == b.d.first)
        return a.d.second>b.d.second;
        else
        return a.d.first>b.d.first;

    }
};

int main()
{
  vector<struct rdeer>v;
  long int m,s,p,res=0,i,x;char ch;string name;
  scanf("%ld",&m);
  while(m--)
  {
      cin>>ch>>name;
      res=0;
      struct rdeer r;
     // r.name=name;
      if(ch=='A')
      {
        cin>>s>>p;
        r.name=name;
        r.d.first=s;
        r.d.second=p;
        v.push_back(r);
        sort(v.begin(),v.end(),comp());
        if(v.size()==1)
            res=0;
        else
        {for(i=0;i<v.size()-1;i++)
            res+=v[i].d.second*v[i+1].d.second;
        }
        printf("%ld\n",res);
      }
      if(ch=='R')
      {
          for(i=0;i<v.size();i++)
          {
              if(v[i].name==name)
              v.erase(v.begin()+i);
          }
          //x=find(v.begin(),v.end(),r)-v.begin();
          //v.erase(v.begin()+x);
          if(!v.empty())
          {
          if(v.size()==1)
            res=0;
          else
          {for(i=0;i<v.size()-1;i++)
            res+=v[i].d.second*v[i+1].d.second;}
          }
        printf("%ld\n",res);

      }
  }
  return 0;
}

