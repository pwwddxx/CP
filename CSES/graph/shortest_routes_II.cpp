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

const int mxN = 500;
const ll inf = LLONG_MAX;
vector<vector<ll>> adjMatrix;
int n, m, q;

void fws() { 
  for(int i = 0; i < n; i++) {
    adjMatrix[i][i] = 0;
  }
  for(int k = 0; k < n; k++){
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++){
        if(adjMatrix[i][k] != inf && adjMatrix[k][j] != inf)
        adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
      }
    }
  } 
}

void runcase() {
  cin >> n >> m >> q;
  adjMatrix.resize(n, vector<ll>(n, inf));
  for(int i = 0, a,b,c; i < m; i++){
    cin >> a >> b >> c, a--, b--;
    adjMatrix[a][b] = min(adjMatrix[a][b], (ll)c);
    adjMatrix[b][a] = min(adjMatrix[b][a], (ll)c);
  }
  fws();
  for(int j = 0, u,v; j < q; j++){
    cin >> u >> v, u--,v--;
    cout << (adjMatrix[u][v] == inf ? -1 : adjMatrix[u][v]) << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

