#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int n; cin >> n; 
  string s; cin >> s;
  int t = count(s.begin(), s.end(), '1');
  ll ans = 0;
  for(int i = 0; i < (int)s.size(); i++) {
    if(s[i] == '1') ans += t - 1;
    else ans+= t + 1;
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

