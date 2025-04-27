#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ld long double
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for (auto &x : (ar)) cin >> x;
#define inMatrix(ar, rows, cols) for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) cin >> ar[i][j];
#define Pi atan(1) * 4

void runcase() {
  int n; cin >> n;
  string s; cin >> s; 
  if(count(all(s),'0') == n) cout << n;
  else if(count(all(s),'1') == n) cout << n+1;
  else {
    int clr = 0, crl = 0;
    int sw = 0; 
    char prev = '0'; // start at 0 bro
    for(int i = 0; i < n; i++) {
      if(prev != s[i]) {
        if(prev == '1') clr++;
        else crl++;
        prev = s[i];
      }
    }
    sw += (s[0] == '1' ? 1 : 0);
    sw = crl + clr;
    if(crl > 1 || clr > 1) {
      cout << n + (sw - 2);
    }else if(sw > 1) {
      cout << n + sw - 1;
    }else cout << n + sw;
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

