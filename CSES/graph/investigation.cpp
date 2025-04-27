#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

const int mxN = 1e5, md = 1e9 + 7;
const ll inf = LLONG_MAX / 2;
vector<pair<ll, int>> adj[mxN];

void runcase() {
  int n, m;
  cin >> n >> m;
  for (int i = 0, a, b, c; i < m; i++) {
    cin >> a >> b >> c;
    a--; b--;
    adj[a].push_back({c, b});
  }
  vector<ll> dist(n, inf);
  vector<ll> ways(n, 0);
  vector<ll> min_edges(n, inf);
  vector<ll> max_edges(n, 0);

  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  dist[0] = 0;
  ways[0] = 1;
  min_edges[0] = 0;
  max_edges[0] = 0;
  pq.push({0, 0});

  while (!pq.empty()) {
    auto [d, v] = pq.top();
    pq.pop();
    if (d > dist[v]) continue;

    for (auto [w, u] : adj[v]) {
      ll new_dist = d + w;
      if (new_dist < dist[u]) {
        dist[u] = new_dist;
        ways[u] = ways[v];
        min_edges[u] = min_edges[v] + 1;
        max_edges[u] = max_edges[v] + 1;
        pq.push({new_dist, u});
      } else if (new_dist == dist[u]) {
        ways[u] = (ways[u] + ways[v]) % md;
        min_edges[u] = min(min_edges[u], min_edges[v] + 1);
        max_edges[u] = max(max_edges[u], max_edges[v] + 1);
      }
    }
  }
  cout << dist[n-1] << " " << ways[n-1] << " " << min_edges[n-1] << " " << max_edges[n-1] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; // cin >> t;
  while (t--) runcase();
  return 0;
}
