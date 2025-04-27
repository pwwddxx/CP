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
int n,m,sti,stj,ti,tj;
string s[mxN];

bool valid(int i, int j){
  return i>=0 && i<n && j>=0 && j<m;
}

pair<int, vector<char>> bfs(int si, int sj, int ei, int ej){
  vector<vector<int>> dist(n, vector<int>(m, -1));
  queue<pair<int,int>> q;
  vector<vector<char>> parDir(n, vector<char>(m, ' '));
  q.push({si, sj});
  dist[si][sj] = 0;

  while(!q.empty()){
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    if(x == ei && y == ej){
      vector<char> path;
      while(x != si || y != sj){
        char di = parDir[x][y];
        path.push_back(di);

        if(di == 'L') y++;
        if(di == 'U') x++;
        if(di == 'R') y--;
        if(di == 'D') x--;
        
      }
      reverse(path.begin(), path.end());
      return {dist[ei][ej], path};
    }

    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};
    char d[] = {'U', 'R', 'D', 'L'};

    for(int i = 0; i < 4; i++){
      int goX = x + drow[i];
      int goY = y + dcol[i];
      if(valid(goX, goY) && (s[goX][goY] == '.' || s[goX][goY] == 'B') && dist[goX][goY] == -1){
        dist[goX][goY] = dist[x][y] + 1;
        q.push({goX, goY});
        parDir[goX][goY] = d[i];
      }
    } 
  }
  return {-1, {}};
}

void runcase() {
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    cin >> s[i];
    for(int j = 0; j < m; j++){
      if(s[i][j] == 'A'){
        sti = i;
        stj = j;
      }
      if(s[i][j] == 'B'){
        ti = i;
        tj = j;
      }
    }
  }
  auto [shortestDist, Path] = bfs(sti, stj, ti, tj);
  if(shortestDist != -1){
    cout << "YES\n";
    cout << shortestDist << '\n';
    for(auto move : Path) cout << move;
  }
  else{
    cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

