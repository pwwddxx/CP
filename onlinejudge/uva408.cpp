#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int STEP, MOD;
  while(cin >> STEP >> MOD) {
    set<int> st;
    vector<int> v(MOD);
    st.insert(0);
    v[0] = 0;
    bool ok = 0;
    for(int i = 1; i < MOD; i++) {
      v[i] = (v[i-1] + STEP) % MOD;
      if(st.find(v[i]) != st.end()) {
        ok = 1;
        break;
      }
      st.insert(v[i]);
    }
    cout << setw(10) << right << STEP;
    cout << setw(10) << right << MOD;
    cout << "    " << (ok ? "Bad Choice\n\n" : "Good Choice\n\n");
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

