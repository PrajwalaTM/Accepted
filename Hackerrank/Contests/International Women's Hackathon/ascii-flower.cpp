#include <bits/stdc++.h>

using namespace std;
int main(){
int array [3][5] =
{
  {46, 46,79,46,46},
  {79,46,111,46,79},
  {46, 46,79,46,46}
};
int r,c,i,j,k;
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		for(k=0;k<5;k++)
			printf("%c",array[0][k]);
	}
	printf("\n");
	for(j=0;j<c;j++)
	{
		for(k=0;k<5;k++)
			printf("%c",array[1][k]);
	}
	printf("\n");
	for(j=0;j<c;j++)
	{
		for(k=0;k<5;k++)
			printf("%c",array[2][k]);
	}
	printf("\n");
}
return 0;
}