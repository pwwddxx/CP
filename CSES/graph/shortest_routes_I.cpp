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
const ll inf = LLONG_MAX;
int n,m;
vector<pair<int,int>> adj[mxN];

vector<ll> dijkstra(int src){
    vector<ll> dist(n, inf);
    priority_queue<pair<ll,int>, vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    dist[src] = 0;
    pq.push({0, src});
    while (!pq.empty()) {
      ll d = pq.top().first;
      int v = pq.top().second;
      pq.pop();
       if (d > dist[v]) continue;
      for(auto it : adj[v]) {
        int wt = it.first;
        int adjV = it.second;
        if(d + wt < dist[adjV]) {
          dist[adjV] = d + wt;
          pq.push({dist[adjV], adjV});
      }
    }
  }
  return dist;
}

void runcase() {
  cin >> n >> m;
  for(int i = 0, a,b,c; i < m; i++){
    cin >> a >> b >> c, a--, b--;
    adj[a].pb({c, b});
  }
  vector<ll> ans = dijkstra(0);
  for(auto x : ans) cout << x << " ";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

