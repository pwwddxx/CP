#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void solve() {
  int n;
  string s;
  cin >> n >> s;
  int a[n];
  for(auto &x : a){
    cin >> x;
  }
  int mnN = 1e9+1;
  for(int i=0; i<n-1; i++){
    if(s[i]=='R' && s[i+1]=='L'){
      mnN = min(mnN,a[i+1]-a[i]);
    }
  }
  if(mnN == 1e9 +1) cout << -1 << '\n';
  else cout << mnN/2 << '\n';
  return;	
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve(); 
   return 0;
}

