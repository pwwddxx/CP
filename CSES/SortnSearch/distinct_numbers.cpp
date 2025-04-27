#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int n; cin >> n;
  set<int> st;
  for(int i = 0, x; i < n; i++) {
    cin >> x;
    st.insert(x);
  }
  cout << st.size();
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

