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
  ll N,Q;
  cin >> N >> Q;
  vector<ll> ar(N+1);
  iota(ar.begin(), ar.end(), 0);
  ll opt = 0;
  while(Q--) {
    ll type; cin >> type;
    ll p,x,k;
    switch (type) {
      case 1:
        cin >> p >> x;
        if(opt == 0) {
          ar[p] = x;
          break;
        }
        if((p+opt)%N == 0) {
          ar[N] = x;
        }
        else {
          ar[(p+opt)%N] = x;
        }
        break;
      case 2: {
                cin >> p;
                if(opt == 0) {
                  cout << ar[p] << '\n';
                  break;
                }
                if((p+opt)%N == 0) {
                  cout << ar[N] << '\n';
                }
                else {
                  cout << ar[(p+opt)%N] << '\n';
                }
                break;
              }
      case 3:
              cin >> k; 
              opt = (opt + k) % N; 
              break;
              // 1 2 3 4 5 k = 0
              // 2 3 4 5 1 k = 1 
              // 3 4 5 1 2 k = 2 
              // 4 5 1 2 3 k = 3 
              // 5 1 2 3 4 k = 4
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

