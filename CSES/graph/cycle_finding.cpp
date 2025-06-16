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

const int mxN = 2500;
const ll inf = 1e18;
int n,m, par[mxN];
vector<pair<int, int>> adj[mxN];
vector<int> ans;
ll dist[mxN];

void runcase() {
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    int a,b,c;
    cin >> a >> b >> c;
    --a; --b;
    if(n == m && a == b && c < 0){
      cout << "YES\n";
      cout << ++a << " " << ++b;
      return;
    }
    adj[a].push_back({b,c});
  }
  fill(dist, dist+n, 0);
  fill(par, par+n, -1);
  dist[0] = 0;
  for(int it = 0; it < n-1; it++){
    for(int u = 0; u < n; u++){
      for(auto [v,d] : adj[u]){
        if(dist[u] + d < dist[v]){
          dist[v] = dist[u] + d;
          par[v] = u;
        }
      }
    }
  }

  for(int u = 0; u < n; u++){
    if(!ans.empty()) break;
    if(dist[u] == inf) continue;
    for(auto [v,d] : adj[u]){
      if(dist[u] + d < dist[v]) {
        int t = v;
        //step back n times
        for(int i = 0; i < n; i++) {
          t = par[t];
        }
        int h = t;
        ans.pb(h);
        h = par[h];
        while(h != t) {      
          ans.pb(h);
          h = par[h];
        }
        ans.pb(t);
        reverse(all(ans));
        break;
      }
    }
  }

  if(ans.empty()){
    cout << "NO\n";
  } else 
  {
    cout << "YES\n";
    for(auto x : ans) cout << x + 1 << ' ';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

