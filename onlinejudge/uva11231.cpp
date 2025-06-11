#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int n = -1, m, c;
  cin >> n >> m >> c;
  while(n != 0 || m != 0 || c != 0) {

    if((n == 8 && m == 8) && c == 0) {
      cout << "0\n";
    }
    else {
      cout << ((n-7)*(m-7) + (c==1))/2 << '\n';
    }
    cin >> n >> m >> c;
  }

  // 101010101
  // 010101010
  // 101010101
  // 010101010
  // 101010101
  // 010101010
  // 101010101
  // 010101010
  // 101010101
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

