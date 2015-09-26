#include <bits/stdc++.h> 
2 using namespace std; 
3 
 
4 #define ll long long 
5 //#define l long 
6 
 
7 #define MAX 100003 
8 #define MOD 1000000007 
9 
 
10 #define fin(i,a,n) for(i=a;i<=n;i++) 
11 #define fde(i,a,n) for(i=n;i>=a;i--) 
12 
 
13 #define sd(a) scanf("%d",&a) 
14 #define sld(a) scanf("%ld",&a) 
15 #define slld(a) scanf("%lld",&a) 
16 #define slf(a) scanf("%lf",&a) 
17 
 
18 #define pd(a) printf("%d",a) 
19 #define pld(a) printf("%ld",a) 
20 #define plld(a) printf("%lld",a) 
21 #define plf(a) printf("%lf",a) 
22 #define pn printf("\n") 
23 #define ps printf(" ") 
24 
 
25 #define mp make_pair 
26 #define pb push_back 
27 
 
28 pair<int,int> st[2*MAX]; 
29 char a[MAX]; 
30 
 
31 void update(int ss,int se,int i,int si) 
32 { 
33     if(i<ss || i>se) 
34         return; 
35     if(ss==se) 
36     { 
37         st[si].first = -st[si].first; 
38         st[si].second = st[si].first; 
39         return; 
40     } 
41 
 
42     int mid = ss + (se-ss)/2; 
43 
 
44     update(ss,mid,i,2*si+1); 
45     update(mid+1,se,i,2*si+2); 
46 
 
47     st[si].first = st[2*si+1].first + st[2*si+2].first; 
48     st[si].second = min(st[2*si+1].second , st[2*si+1].first + st[2*si+2].second); 
49     return; 
50 } 
51 
 
52 void construct(int ss,int se,int si) 
53 { 
54     if(ss==se) 
55     { 
56         st[si].first = a[ss]=='('?1:-1; 
57         st[si].second = st[si].first; 
58         return; 
59     } 
60 
 
61     int mid = ss + (se-ss)/2; 
62 
 
63     construct(ss,mid,2*si+1); 
64     construct(mid+1,se,2*si+2); 
65 
 
66     st[si].first = st[2*si+1].first + st[2*si+2].first; 
67     st[si].second = min(st[2*si+1].second , st[2*si+1].first + st[2*si+2].second); 
68 
 
69     return; 
70 } 
