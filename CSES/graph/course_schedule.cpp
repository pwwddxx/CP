#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for (auto &x : (ar)) cin >> x;
#define printAr(ar) for (auto &x : (ar)) { cout << x << " "; cout << '\n'; }
#define Pi atan(1) * 4

const int mxN = 1e5;
vector<int> adj[mxN];
int n,m, vis[mxN];
stack<int> st;

bool dfs(int node) {
  vis[node] = 2;
  for(auto it : adj[node]) {
    if(!vis[it]) {
      dfs(it);
    }
    else if(vis[it] == 2) {
      return false;
    }
  }
  vis[node] = 1;
  st.push(node);
  return true;
}

void runcase() {
  cin >> n >> m; 
  for(int i = 0, a,b; i < m; i++) {
    cin >> a >> b, a--,b--;
    adj[a].pb(b);
  }
  for(int i = 0; i < n; i++) {
    if(!vis[i])
      if(dfs(i) == false) {
        cout << "IMPOSSIBLE";
        return;
      }
  }
  if(st.size() != n) {
    cout << "IMPOSSIBLE";
    return;
  } 
  while(st.size()) {
    cout << st.top() + 1 << ' ';
    st.pop();
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

