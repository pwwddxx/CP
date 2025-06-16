#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int n,x;
  cin >> n >> x;
  int ar[n];
  bool mxN = 0;
  for(auto &a : ar) cin >> a;
  if(count(ar, ar+n, 0) == n) {
    cout << "YES\n";
    return;
  }
  for(int i = 0; i < n; i++) {
    if(ar[i] == 1) {
      int t;
      for(int j = n-1; j >= i; j--) {
        if(ar[j] == 1) {
          t = j;
          break;
        }
      }
      int len = t - i + 1;
      cout << (x >= len ? "YES\n" : "NO\n");
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}
