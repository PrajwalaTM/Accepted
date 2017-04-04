#include <bits/stdc++.h>
using namespace std;

int main()
{
//    cout << "Hello World!" << endl;
  int t;
  scanf("%d",&t);
  while(t--)
  {
      string s;
      cin>>s;
      long i=0,d=0,size;char ch;
      map<char,vector<long> >m;
      vector<long>v;
       map<char,vector<long> > ::iterator it;
      long l=s.size();
      for(i=0;i<l;i++)
      m[s[i]].push_back(i);
      long _max=0;
      for(it=m.begin();it!=m.end();it++)
      {
          v=it->second;
          size=v.size();
          d=v[size-1]-v[0];
          if(d>_max)
          {
              _max=d;
              ch=it->first;
          }
      }
      if(_max)
      printf("%ld\n",_max-1);
      else
      printf("-1\n");
  }
    return 0;
}
