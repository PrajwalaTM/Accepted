#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
  long long t,n,v;long long x,y;
  vector<pair<long long,long long> >p;
  map<long long,long long>m;
  scanf("%lld",&t);
  while(t--)
  {
    scanf("%lld",&n);
    long long int num=n;
    long long a[num],b[num],k=0,j,area=0;
 
    while(n--)
    {
     scanf("%lld",&v);
     for(long long i=0;i<v;i++)
     {
      scanf("%lld%lld",&x,&y);
      p.push_back(make_pair(x,y));
     }
     area=0;
     for(long long i=0;i<v;i++)
     {
       if(i==v-1)
        j=0;
       else
        j=i+1;
       area=area+(p[i].first*p[j].second-p[i].second*p[j].first);
       }
       p.clear();
       //area/=2;
       area=abs(area);
       a[k]=area;
       b[k]=area;
        k++;
    }
    sort(a,a+num);
    for(long long i=0;i<num;i++)
    {
        m[a[i]]=i;
       //cout<<a[i]<<'\t'<<m[a[i]]<<endl;
    }
   for(long long i=0;i<num;i++)
        printf("%d ",m[b[i]]);
    printf("\n");
}
 
return 0;
}
