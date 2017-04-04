#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n,i;
    cin >> n;
    int squares[n];
    int sum[n];
    memset(sum,0,sizeof(sum));
    for(int squares_i = 0; squares_i < n; squares_i++){
       cin >> squares[squares_i];
    }
    int d;
    int m;
    cin >> d >> m;
    sum[0]=squares[0];
    
    for(i=1;i<n;i++)
    sum[i]=sum[i-1]+squares[i];
    int count=0;
    for(i=0;i<n-m;i++)
    {
        if(sum[i+m-1]-sum[i]+squares[i]==d)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
