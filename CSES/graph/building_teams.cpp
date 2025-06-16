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
int n,m,color[mxN];
vector<int> adj[mxN];

bool dfs(int node, int colorList[], vector<int> adjList[], int valCol){
  color[node] = valCol;
  for(auto it : adj[node]){
    if(color[it] == -1){
      if(dfs(it, color, adj, !valCol) == false) return false;
    }
    else if (color[it] == color[node]) {
      return false; 
    }
  }
  return true;
}

void runcase() {
  cin >> n >> m;
  fill(color, color + mxN, -1);
  for(int i = 0; i < m; i++){
    int u ,v;
    cin >> u >> v, u--, v--;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  for(int i = 0; i < n; i++){
    if(color[i] == -1){
      if(dfs(i, color, adj, 0) == false){
        cout << "IMPOSSIBLE";
        return;
      }
    }
  }
  for(int i = 0; i < n; i++){
    if(color[i] == 0) cout << "1 ";
    else cout << "2 ";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

