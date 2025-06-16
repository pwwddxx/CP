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
  int N,Q;
  cin >> N >> Q;
  vector<int> cnt(N,0);
  while(Q--) {
    int x; 
    cin >> x;
    if(x != 0) {
      cout << x;
      cnt[x-1]++;
    }
    else {
      int mnN = *min_element(cnt.begin(), cnt.end());
      for(int i = 0; i < N; i++) {
        if(cnt[i] == mnN) {
          cout << i + 1;
          cnt[i]++;
          break;
        }
      }
    }
    if(Q != 0) cout << ' ';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

