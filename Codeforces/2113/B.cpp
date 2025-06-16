#include <bits/stdc++.h>
using namespace std;

void DBG() {
  cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
  cerr << to_string(h);
  if(sizeof...(t))
    cerr << ", ";
  DBG(t...);
}
#ifdef LOCAL
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 42
#endif

void dbg2(int32_t array[], int32_t n) {
  cerr << "array --> [";
  for(int32_t i = 0; i < n; i++) {
    cerr << array[i];
    cerr << (i == n-1 ? "]" : ", ");
  }
  cerr << '\n';
}

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  ll w, h, a, b, x1, y1, x2, y2;
  cin >> w >> h >> a >> b >> x1 >> y1 >> x2 >> y2; 
  // place a 2a 3a 4a ... 
  // b 2b 3b 4b ...
  if((x1 != x2) && (x1-x2)%a == 0) cout << "Yes\n";
  else if((y1 != y2) && (y1-y2)%b == 0) cout << "Yes\n";
  else cout << "No\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}
