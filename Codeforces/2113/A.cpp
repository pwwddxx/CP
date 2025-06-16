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
  int k, a, b, x, y;
  cin >> k >> a >> b >> x >> y;

  if (k < a && k < b) {
    cout << "0\n";
    return;
  }

  int ans = 0;

  if (x <= y) {
    if (k >= a) {
      int temp = (k - a) / x + 1;
      ans += temp;
      k -= temp * x;
    }
    if (k >= b) {
      int temp = (k - b) / y + 1;
      ans += temp;
    }
  } else {
    if (k >= b) {
      int temp = (k - b) / y + 1;
      ans += temp;
      k -= temp * y;
    }
    if (k >= a) {
      int temp = (k - a) / x + 1;
      ans += temp;
    }
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
