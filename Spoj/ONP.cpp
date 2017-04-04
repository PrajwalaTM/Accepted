#include <bits/stdc++.h>
using namespace std;

int priority(char ch)
{
	switch(ch){
		case '+': return 1;
		case '-': return 1;
		case '*': return 2;
		case '/': return 3;
		case '^': return 3; 
	}
	return -1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[405];
		scanf("%s",s);
		int l=strlen(s),i,j=0;
		char res[l+5];
		stack<char>st;
	//	printf("%d\n",l );
		for(i=0;i<l;i++)
		{
		//printf("%c\n",s[i] );
			if(s[i]>='a' && s[i]<='z')
				res[j++]=s[i];
			else if(s[i]=='(')
				st.push(s[i]);
			else if(s[i]==')')
			{
				while(!st.empty() && st.top()!='(')
					{
					res[j++]=st.top();
					st.pop();
					}
					if(!st.empty())
					st.pop();
			}
			
			else  {
				while(!st.empty() && st.top()!='(' && priority(st.top())>=priority(s[i]))
					{res[j++]=st.top();st.pop();}
					st.push(s[i]);
			}
			
		}
		//printf("done\n");
		
		while(!st.empty())
			{res[j++]=st.top();st.pop();}
		printf("%s\n", res);
	}
	return 0;
}