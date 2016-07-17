#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define MAX 100003
#define MOD 1000000007
 
#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
pair<int,int> M[1000][1000][10][10];
 
int main()
{
int n,m;
sd(n);sd(m);
int mat[n][m],i,j,aux[n][m],res,x,y;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
sd(mat[i][j]);
}
ll p_i,p_j;
for(i = 0;(1<<i)<= n;i++)
   {
   for(j = 0;(1<<j)<= m;j++)
            {
            for(x = 0;(x + (1<<i) -1)<n;x++)
                {
                for(y = 0;(y + (1<<j) -1)< m;y++)
                    {
                    p_i=(1<<(i-1));p_j=(1<<(j-1));  
                    if (i == 0 && j == 0)
                        M[x][y][i][j] = make_pair(x,y);
                    else if (i == 0)
                        M[x][y][i][j]=(mat[M[x][y][i][j-1].first][M[x][y][i][j-1].second]>mat[M[x][y+(p_j)][i][j-1].first][M[x][y+(p_j)][i][j-1].second])?M[x][y][i][j-1]:M[x][y+(p_j)][i][j-1];
                    else if (j == 0)
                        M[x][y][i][j] = (mat[M[x][y][i-1][j].first][M[x][y][i-1][j].second]> mat[M[x+ (p_i)][y][i-1][j].first][M[x+ (p_i)][y][i-1][j].second])?M[x][y][i-1][j]:M[x+ (p_i)][y][i-1][j];
                    else 
                        {
pair<int,int>temp;
M[x][y][i][j] = mat[M[x][y][i-1][j-1].first][M[x][y][i-1][j-1].second] > mat[M[x + (p_i)][y][i-1][j-1].first][M[x + (p_i)][y][i-1][j-1].second]?M[x][y][i-1][j-1]:M[x + (p_i)][y][i-1][j-1];
 
temp=mat[M[x][y+(p_j)][i-1][j-1].first][M[x][y+(p_j)][i-1][j-1].second]> mat[M[x + (p_i)][y+(p_j)][i-1][j-1].first][M[x + (p_i)][y+(p_j)][i-1][j-1].second]?M[x][y+(p_j)][i-1][j-1]:M[x + (p_i)][y+(p_j)][i-1][j-1];
M[x][y][i][j]=mat[M[x][y][i][j].first][M[x][y][i][j].second]>mat[temp.first][temp.second]?M[x][y][i][j]:temp;
}
}
}
}
}
int q;
sd(q);
for (int i=0; i<m; i++)
aux[0][i] = mat[0][i];
 
for (int i=1; i<n; i++)
 for (int j=0; j<m; j++)
   aux[i][j] = mat[i][j] + aux[i-1][j];
 
for (int i=0; i<n; i++)
  for (int j=1; j<m; j++)
   aux[i][j] += aux[i][j-1];
 
while(q--)
{
int a,b,k,l,res2;
ll min_val=MOD;
sd(a);sd(b); 
pair<int,int>ans;
for(i=0;i<n-a+1;i++)
{
for(j=0;j<m-b+1;j++)
{
 if(i+a-1<n && j+b-1 <m)
 res = aux[i+a-1][j+b-1];
if(i-1 >=0 && j+b-1<m)
 res = res - aux[i-1][j+b-1];
if(i+a-1<n && j-1>=0)
 res = res - aux[i+a-1][j-1];
if(i-1>=0 && j-1>=0)
 res = res + aux[i-1][j-1];
k = (ll)log2(a);
l = (ll)log2(b);
ll p_k,p_l;
p_k=(1<<k);p_l=(1<<l);
pair<int,int> t1,t2,t3,t4,t5;
t1=M[i][j][k][l];
t2=M[i+a-1 - (p_k) + 1][j][k][l];
t3=M[i][j+b-1 - (p_l) + 1][k][l];
t4=M[i+a-1 - (p_k) + 1][j+b-1 - (p_l) + 1][k][l];
ans=mat[t1.first][t1.second]>mat[t2.first][t2.second]?t1:t2;
t5=mat[t3.first][t3.second]>mat[t4.first][t4.second]?t3:t4;
ans=mat[ans.first][ans.second]>mat[t5.first][t5.second]?ans:t5;
res2=mat[ans.first][ans.second];
//printf("%lld ",res2);
min_val=min(min_val,(ll)(res2*a*b-res));
}
}
printf("%lld\n",min_val);
}
return 0;
}
