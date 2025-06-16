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
int n,m;
vector<int> adj[mxN];
vector<int> dist(mxN, -1);

int bfs(vector<int> &p, int st, int tar, vector<int> adjList[]){
  queue<int> q;
  map<int,int> who;
  q.push(st);
  dist[st] = 0;
  while(!q.empty()){
    int N = q.front();
    q.pop();
    if(N == tar){
      p.pb(tar);
      int i = N;
      while(i != st){
        p.pb(who[i]);
        i = who[i];
      }
      reverse(all(p));
    }
    for(auto it : adj[N]){
      if(dist[it] == -1){
        dist[it] = dist[N] + 1;
        q.push(it);
        who[it] = N;
      }
    }
  }
  return dist[tar];
}

void runcase() {
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    int u,v;
    cin >> u >> v, u--, v--;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  vector<int> p;
  int target = n - 1;
  int res = bfs(p, 0, target, adj);
  if(res != -1){
    cout << sz(p) << '\n';
    for(auto x : p) cout << x+1 << " ";
  }
  else cout << "IMPOSSIBLE\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

