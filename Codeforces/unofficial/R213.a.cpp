#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void solve() {
  int n,k;
  cin >> n >> k;
  int ans = n;
  while(n--){
    string s;
    cin >> s;
    set<char> v;
    for(int i=0; i<s.length(); i++){
      v.insert(s[i]);
    }
    if(v.size() < k+1){
      ans--;
      continue;
    }
    else{
      for(int i=0; i<k+1; i++){
        if(v.find(i +'0') == v.end()){
          ans--;
          break;
        }
      }
    }
  }
  cout << ans << '\n';
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

