#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  ll n; 
  cin >> n;
  while(n != 0) {
    ll t = (ll)(sqrt(n));
    cout << (t * t == n ? "yes\n" : "no\n"); 
    cin >> n;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

