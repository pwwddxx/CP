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
const ll inf = 1e17;
const ll ninf = -1e17;
vector<pair<int,pair<int,ll>>> adj;
int n,m;
 
void runcase() {
  cin >> n >> m;
  bool f = false;
  for(int i = 0, a,b,c; i < m; i++){
    cin >> a >> b >> c, a--, b--;
    if(a == n-1 && a == b && c < 0 && m==1) f=true;
    // convert longest to shortest problem
    adj.pb({a, {b, -c}});
  }
  if(f){cout << 0; return;}
  vector<ll> dist(n, inf);
  dist[0] = 0;
  for(int i = 0; i < n - 1; i++){
    for(auto it : adj){
      int u = it.first;
      int v = it.second.first; 
      long long val = it.second.second;
      if(dist[u] != inf && dist[u] + val < dist[v]){
        dist[v] = dist[u] + val;
        dist[v] = max(ninf, dist[v]);
      }
    }
  }
  for(int i = 0; i < n - 1; i++){
    for(auto it : adj){
        int u = it.first;
        int v = it.second.first; 
        long long val = it.second.second;
        if(dist[u] != inf && dist[u] + val < dist[v]){
          dist[v] = ninf;
        }
      }
  }
  cout << (dist[n-1] == ninf || dist[n-1] == 0 ? -1 : -dist[n-1]);  
}
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}
