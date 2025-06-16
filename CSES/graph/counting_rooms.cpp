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

const int mxN = 1e3;
int n, m;
string s[mxN];

bool valid(int i, int j){
  return i>=0 && i<n && j>=0 && j<m;
}

void dfs(int i, int j){
  s[i][j] = '#';
  int drow[] = {-1, 0, 1, 0};
  int dcol[] = {0, 1, 0, -1};
  for(int x = 0; x < 4; x++){
    int r = i + drow[x];
    int c = j + dcol[x];
    if(valid(r, c) && s[r][c] == '.'){
      dfs(r, c);
    }
  }
  return;
}
void runcase() {
  cin >> n >> m;
  for(int i = 0; i < n; ++i) cin >> s[i];

  int ans = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(s[i][j] == '.'){
      dfs(i,j);
      ans++;
      }
    }
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

