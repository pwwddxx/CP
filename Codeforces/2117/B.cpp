#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int n;
  cin >> n;
  int x = 3;
  cout << 1 << ' ';
  for(int i = n; i >= 2; i--) {
    cout << i;
    cout << (i == 2 ? '\n' : ' ');
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}
