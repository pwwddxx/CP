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


int dfs(int node, int viss[], vector<int> edges[], vector<int> &ans){
  viss[node] = 1;
  for(auto it : edges[node]){
    if(!viss[it]){
      dfs(it, viss, edges, ans);
    }
  }
  return node;
}

void runcase() {
  int n, m;
  cin >> n >> m;
  vector<int> edges[n + 1];
  vector<int> ans;
  int viss[n+1] = {0};

  for(int i = 0; i < m; i++){
    int u, v;
    cin >> u >> v;
    edges[u].pb(v);
    edges[v].pb(u);
  }

  int cnt = 0;
  for(int i = 1; i <= n; i++){
    if(!viss[i]){
      int lastN = dfs(i, viss, edges, ans);
      ans.pb(lastN);
      cnt++;
    }
  }

  if(cnt != 1){
    cout << cnt - 1 << '\n';
    for(int i = 0; i < cnt - 1; i++){
      cout << ans[i] << " " << ans[i+1] << '\n';
    }
  }
  else{
    cout << "0\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

