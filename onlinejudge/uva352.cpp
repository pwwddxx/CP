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

const int mxN = 25;
string grid[mxN];

void dfs(int i, int j) {
  int drow[] = {-1, -1, 0, 1, 1, 1, 0, -1};
}

void runcase() {
  int N; cin >> N;
  for(int i = 0; i < N; i++) cin >> grid[i];
  int ans = 0;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(grid[i][j] == '1') {
        dfs(i, j);
        ans++;
      }
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

