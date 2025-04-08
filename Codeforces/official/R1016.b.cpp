#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (ll)(x).size()
#define inArray(ar) for (auto &x : (ar)) cin >> x;
#define printAr(ar) for (auto &x : (ar)) { cout << x << " "; cout << '\n' }
#define inMatrix(ar, rows, cols) for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) cin >> ar[i][j];
#define Pi atan(1) * 4

void runcase(){
  string s;
  cin >> s;
  if(sz(s) == 1){
    cout << "0\n";
    return;
  }
  else if(find(s.begin(),s.end(), '0') == s.end()){
    cout << sz(s) - 1 << '\n';
    return;
  }
  else {
      ll cnt = 0;
      reverse(s.begin(), s.end());
      for(ll i = 0; i < sz(s); i++) {
        if(s[i] != '0') break;
        else cnt++;
      }
      cout << sz(s) - count(s.begin(),s.end(),'0') - 1 + cnt << '\n';
    }
  }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

