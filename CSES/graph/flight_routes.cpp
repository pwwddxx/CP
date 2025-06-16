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
int n,m,k;
vector<ll> dist[mxN];
vector<pair<ll,int>> adj[mxN];

void runcase() {
  cin >> n >> m >> k;
  for(int i = 0, a,b,c; i < m; i++) {
    cin >> a >> b >> c, a--,b--;
    adj[a].pb({c, b});
  }
  priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
  pq.push({0, 0});
  while(!pq.empty()) {
    auto [d, v] = pq.top();
    pq.pop();
    if(dist[v].size() >= k) continue;
    dist[v].pb(d);
    for(auto it : adj[v]) {
      pq.push({d+it.first, it.second});
    }
  }
  for(int i = 0; i < k; i++) {
    cout << dist[n-1][i] << " ";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

