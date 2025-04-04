#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
  int n; cin >> n;
  string s; cin >> s;
  map<int,int> mp = {{0,0},{1,0}};
  for(int i=0 ;i<n; i++){
    if(s[i]=='0') mp[0]++;
    else mp[1]++;
  }
  int mn = min(mp[0],mp[1]);
  cout << n -2*mn;;
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}
