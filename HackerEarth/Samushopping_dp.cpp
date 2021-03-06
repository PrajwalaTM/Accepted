#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  	int N;
  	cin>>N;
  	vector<vector<int>> shops(N,vector<int>(3));
  	for(int i=0;i<N;i++){
  		for(int j=0;j<3;j++){
  			cin>>shops[i][j];
  		}
  	}
  	vector<vector<int>> DP(N,vector<int>(3));
  	for(int i=0;i<3;i++){
  		DP[0][i]=shops[0][i];
  	}
  	for(int i=1;i<N;i++){
  		DP[i][0] = min(DP[i-1][1] , DP[i-1][2]) + shops[i][0]; 
      	DP[i][1] = min(DP[i-1][0] , DP[i-1][2]) + shops[i][1]; 
      	DP[i][2] = min(DP[i-1][0] , DP[i-1][1]) + shops[i][2];       
    }   	
    int ans = min(min(DP[N-1][0], DP[N-1][1]) , DP[N-1][2]);
    cout<<ans<<"\n";
  }
}
