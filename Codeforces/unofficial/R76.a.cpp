#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
  string s; cin >> s;
  unordered_map<string,int> mp;
  for(int i=0; i<10; i++){
    string key;
    cin >> key;
    mp.emplace(key,i);
  }
  for(int i=0; i<80; i+=10){
    cout << mp[s.substr(i,10)];
  }
  return;	
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

