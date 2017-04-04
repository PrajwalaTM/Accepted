#include <bits/stdc++.h>
using namespace std;

int main(){
    long n,score,alice;
    cin >> n;
    //vector<pair<long,long> > scores(n);
    //map<long,long>s;
    //map<long,long> ::iterator it1;
    //vector<pair<long,long> > ::iterator it,prev;
     set<long> s;
     set<long> ::iterator up;
    for(long scores_i = 0;scores_i < n;scores_i++){
        cin>>score;
        s.insert(score);
    }
    long m;
    cin >> m;
    //vector<long> alice(m);
    for(long alice_i = 0;alice_i < m;alice_i++){
       cin >> alice;
       s.insert(alice);
       up=upper_bound (s.begin(), s.end(), alice);
       //up=s.upper_bound(alice);
       cout<<(up-s.begin())<<endl;
    }
    // your code goes here
   
    
    return 0;
}

