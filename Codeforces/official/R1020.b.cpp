#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int n,x; cin >> n >> x;
  if(n == 1) cout << "0\n";
  else {
    if(n == x) {
     for(int i = 0 ; i < n; i++) {
       cout << i << ' ';
     } 
     cout << '\n';
     return;
    }
    for(int i = 0; i < n; i++) {
      if(i == x) continue;
      cout << i << ' ';
    }
    cout << x << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}


