#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  string s; 
  cin >> s;
  map<char, int> mp;
  for (char c : s) {
    mp[c]++;
  }
  string ans = "";
  for (char c = '9'; c >= '1'; c--) {
    if (mp[c] > 0) {
      ans += c;
      mp[c]--;
    }
  }
  for (char c = '1'; c <= '9'; c++) {
    while (mp[c] > 0) {
      ans += c;
      mp[c]--;
    }
  }
  cout << (ans.size() == 10 ? ans : ans+='0') << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}
