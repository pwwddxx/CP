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
vector<int> adj[mxN], dp(mxN, -1);
int n,m, vis[mxN], par[mxN];

void dfs(int node) {
  vis[node] = 1;
  for(auto it : adj[node]) {
    if(!vis[it]) {
      dfs(it);
    }
    if(dp[it] != -1 && dp[it] + 1 > dp[node]) {
      dp[node] = dp[it] + 1;
      par[node] = it;
    }
  }
}

void runcase() {
  cin >> n >> m;
  for(int i = 0, a,b; i < m; i++) {
    cin >> a >> b, a--, b--;
    adj[a].push_back(b);
  }
  dp[n-1] = 1;
  dfs(0);
  if(dp[0] == -1) cout << "IMPOSSIBLE";
  else {
    cout << dp[0] << '\n';
    int t = 0;
    while(dp[0]--) {
      cout << t+1 << ' ';
      t = par[t];
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

