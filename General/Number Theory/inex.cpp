#include <bits/stdc++.h>
using namespace std;
long long int intersectionCardinality(vector<long long int>v,long long n)
{
long long s=v.size(),ans=1,i;
for(i=0;i<s;i++)
ans*=v[i];
return (n/ans);
}
long long int GCD(long long int A, long long int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main()
{
    long long int n,b,result=0,p,q,g,cardinality;
    //long long s,ans=1,i,cardinality;
    scanf("%lld",&n);
    long long set[4];
    set[0]=2;set[1]=3;set[2]=11;set[3]=13;
    for(b = 0; b < (1 << 4); ++b)
    {
     vector<long long int> indices;
     for(int k = 0; k < 4; ++k)
     {
          if(b & (1 << k))
          {
               indices.push_back(set[k]);
               //printf("%lld ",set[k]);
          }
     }
     //printf("\n");
     if(!indices.empty())
     cardinality = intersectionCardinality(indices,n);
     else
        cardinality=0;
    /* s=indices.size();
    for(i=0;i<s;i++)
   ans*=indices[i];
    cardinality=n/ans;*/
    //printf("%lld ",cardinality);
     if(indices.size() % 2 == 1) result += cardinality;
     else result -= cardinality;
    }
    p=result;
    q=n;
    g=GCD(p,q);
    //printf("%lld ",p);
    printf("%lld %lld",p/g,q/g);

    return 0;
}

