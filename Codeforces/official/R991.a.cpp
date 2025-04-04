#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

void runcase(){
   int n,m;
   cin >> n >> m;
   int ans = 0;
   string ar[n];
   inArray(ar);
   for(auto x : ar){
     int len = x.length();
     m-=len;
     if(m<0){
       cout << ans << '\n';
       return;
     }
     ans+=1;
   }
   cout << ans << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); cin>>t;
   while(t--) runcase();
   return 0;
}

