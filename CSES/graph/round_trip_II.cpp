#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for (auto &x : (ar)) cin >> x;
#define printAr(ar) for (auto &x : (ar)) { cout << x << " "; cout << '\n'; }
#define inMatrix(ar, rows, cols) for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) cin >> ar[i][j];
#define Pi atan(1) * 4

const int mxN = 1e5;
vector<int> adj[mxN], ans;
int n,m,st, vis[mxN], par[mxN];

bool dfs(int node) {
  vis[node] = 2;
  for(auto it : adj[node]) {
    par[it] = node;
    if(!vis[it]) {
      if(dfs(it)) return true;
    }
    else if(vis[it] == 2) {
      st = it;
      int t = st;
      ans.pb(t);
      t = par[t];
      while (t != st) {
        ans.pb(t);
        t = par[t];
      }
      ans.pb(st);
      reverse(all(ans));
      return true;
    }
  }
  vis[node] = 1;
  return false;
}

void runcase() {
  cin >> n >> m; 
  for(int i = 0, a,b; i < m; i++) {
    cin >> a >> b, a--,b--;
    adj[a].pb(b);
  }
  for(int i = 0; i < n; i++) {
    if(!vis[i])
    if(dfs(i)) {
      cout << sz(ans) << '\n';
      for(auto x : ans) cout << x + 1 << ' ';
      return;
    }
  }
  cout << "IMPOSSIBLE";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

