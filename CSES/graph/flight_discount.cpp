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
const ll inf = 1e17;
int n,m;
ll dist[mxN], dist2[mxN];
vector<pair<int,int>> adj[mxN], radj[mxN];

void dijkstra(int node, ll dList[], vector<pair<int,int>> adjList[]) {
  priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
  dList[node] = 0;
  pq.push({0, node});
  while(!pq.empty()) {
    auto [d, V] = pq.top();
    pq.pop();
    if(d > dList[V]) continue;
    for(auto [dis, v] : adjList[V]) {
      if(dList[V] + dis < dList[v]) {
        dList[v] = dList[V] + dis;
        pq.push({dList[v], v});
      }
    }
  }
}

void runcase() {
  cin >> n >> m;
  for(int i = 0, a,b,c; i < m; i++) {
    cin >> a >> b >> c, a--,b--;
    adj[a].pb({c, b});
    radj[b].pb({c, a});
  }
  fill(dist, dist + n, inf);
  fill(dist2, dist2 + n, inf);
  dijkstra(0, dist, adj);
  dijkstra(n-1, dist2, radj);
  ll ans = inf;
  for(int i = 0; i < n; i++) {
    for(auto [d, v] : adj[i]) {
      ans = min(ans, dist[i] + d/2 + dist2[v]);
    }
  }
   cout << ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

