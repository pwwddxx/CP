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
int n,m,vis[mxN], who[mxN];

bool dfs(int node, int par){
  vis[node] = 1;
  for(auto it : adj[node]){
    if(!vis[it]){
      who[it] = node;
      if(dfs(it, node)) return true;
    }
    else if(it != par){
      ans.pb(it);
      int temp = node;
      while(temp != it){
        ans.pb(temp);
        temp = who[temp];
      }
      ans.pb(temp);
      reverse(all(ans));
      return true; 
    }
  }
  return false;
}

void runcase() {
  cin >> n >> m;
  memset(vis, 0, sizeof(vis));
  memset(who, -1, sizeof(who));
  for(int i=0, u,v; i < m; i++){
    cin >> u >> v, u--, v--;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  for(int j = 0; j < n; j++){
    if(!vis[j]){
      if(dfs(j, -1) == false) continue;
      else{
        cout << ans.size() << '\n';
        for(auto x : ans) cout << x+1 << ' ';
        return;
      }
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

