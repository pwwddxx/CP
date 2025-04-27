#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ld long double
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for (auto &x : (ar)) cin >> x;
#define inMatrix(ar, rows, cols) for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) cin >> ar[i][j];
#define Pi atan(1) * 4

const int mxN = 2e5;
vector<int> adj[mxN];
int n,q;

void runcase() {
  cin >> n >> q; 
  for(int i = 0, x; i < n; i++) {
    cin >> x, x--;
    adj[i].push_back(x);
  }
  for(int i = 0, a,k; i < q; i++) {
    cin >> a >> k, a--, k;
    if(a == adj[a][0]) {
      cout << a+1;
    }
    else {
      int ans = a;
      for(int i = 0; i < k; i++) {
        ans = adj[ans][0]; 
      }
      cout << ans + 1;
    }
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

