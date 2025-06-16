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
  int n;
  cin >> n;
  if (n == 3) {
    cout << "4\n";
    cout << "2 1 3\n";
    cout << "2 2 3\n";
    cout << "3 1 2\n";
    cout << "3 2 3\n";
    return;
  }
  if (n == 4) {
    cout << "5\n";
    cout << "2 1 4\n";
    cout << "3 1 3\n";
    cout << "3 2 4\n";
    cout << "4 3 4\n";
    cout << "4 1 2\n";
    return;
  }
  int ans = 7;
  if(n==5) cout << "7\n";
  else {
    cout << ((n-5)*2)+ans << '\n';
  }
  cout << 1 << ' ' << 2 << ' ' << n << '\n';
  for(int i = 1; i <= n-1; i++) {
    cout << i+1 << ' ' << 1 << ' ' << n+1-i << '\n';
  }
  int temp = n;
  int temp2 = 3;
  for(int i = 0; i < n-3; i++) {
    cout << temp-- << ' ' << temp2++ << ' ' << n << '\n'; 
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}
