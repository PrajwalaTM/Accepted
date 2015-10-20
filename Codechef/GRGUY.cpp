#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long t;
 scanf("%lld",&t);
 while(t--)
 {
  char l1[200005],l2[200005];long long ans;
  scanf("%s%s",l1,l2);
  long long len=strlen(l1);
  if(l1[0]!='.' && l2[0]!='.')
  {
   printf("No\n");continue;
  }
  else
  {
  long long pos,i;
  if(l1[0]=='.')
    pos=1;
  else
    pos=2;
    ans=0;long long flag=0;
if(!(l1[0]=='.' && l2[0]=='.'))
{for(i=1;i<len;i++)
  {
   if(pos==1)
   {
       if(l1[i]=='.')
        continue;
       else if(l2[i]=='.')
        {ans++;pos=2;}
        else if(l2[i+1]=='.')
       {ans++;i++;pos=2;}
       else
       {flag=1;break;}
   }
   else
   {
    if(l2[i]=='.')
        continue;
       else if(l1[i]=='.')
        {ans++;pos=1;}
        else if(l1[i+1]=='.')
       {ans++;i++;pos=1;}
       else
       {flag=1;break;}
   }
  }
}
else
{
 pos=1;
 for(i=1;i<len;i++)
  {
   if(pos==1)
   {
       if(l1[i]=='.')
        continue;
       else if(l2[i]=='.')
        {ans++;pos=2;}
        else if(l2[i+1]=='.')
       {ans++;i++;pos=2;}
       else
       {flag=1;break;}
   }
   else
   {
    if(l2[i]=='.')
        continue;
       else if(l1[i]=='.')
        {ans++;pos=1;}
        else if(l1[i+1]=='.')
       {ans++;i++;pos=1;}
       else
       {flag=1;break;}
   }
  }
  long long ans1=ans;
  ans=0;
  pos=2;
  for(i=1;i<len;i++)
  {
   if(pos==1)
   {
       if(l1[i]=='.')
        continue;
       else if(l2[i]=='.')
        {ans++;pos=2;}
        else if(l2[i+1]=='.')
       {ans++;i++;pos=2;}
       else
       {flag=1;break;}
   }
   else
   {
    if(l2[i]=='.')
        continue;
       else if(l1[i]=='.')
        {ans++;pos=1;}
        else if(l1[i+1]=='.')
       {ans++;i++;pos=1;}
       else
       {flag=1;break;}
   }
  }
  ans=min(ans,ans1);
}
if(flag==0)
 {
    printf("Yes\n");
      printf("%lld\n",ans);
 
}
else
    printf("No\n");
}
 }
return 0;
}
 
