#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

const int mxN = 1e3;
const int inf = 1e9;
string s[mxN];
int n,m,si,sj;
vector<char> p;
vector<pair<int,int>> mons;
vector<vector<int>> dist1, dist2;
vector<vector<char>> parDir;
int di[] = {-1,0,1,0};
int dj[] = {0,1,0,-1};
char d[] = {'U','R','D','L'};

bool isValid(int x, int y){
  return x>=0 && x<n && y>=0 && y<m && s[x][y]=='.';
}
bool isExit(int x, int y){
  return (x==0 || x==n-1 || y==0 || y==m-1);
}

void bfs1(){
  dist1.resize(n, vector<int>(m, inf));
  queue<pair<int,int>> qm;
  for(auto monster : mons){
    qm.push({monster.first, monster.second});
    dist1[monster.first][monster.second] = 0;
  }
  while(!qm.empty()){
    int x = qm.front().first;
    int y = qm.front().second;
    qm.pop();
    for(int i = 0; i < 4; i++){
      int goX = x + di[i];
      int goY = y + dj[i];
      if(isValid(goX, goY) && dist1[goX][goY] == inf){
        dist1[goX][goY] = dist1[x][y] + 1;
        qm.push({goX, goY});
      }
    }
  } 
}

bool bfs2(int sti, int stj){
  dist2.resize(n, vector<int>(m, inf));
  parDir.resize(n, vector<char>(m, ' '));
  queue<pair<int,int>> qp;
  qp.push({sti,stj});
  dist2[sti][stj] = 0;
  while(!qp.empty()){
    int x = qp.front().first;
    int y = qp.front().second;
    qp.pop();
    if(isExit(x, y) && isValid(x, y) && dist2[x][y] < dist1[x][y]){
      while(x != sti || y != stj){
        char t = parDir[x][y];
        p.pb(t);
        if(t == 'L') y++;
        if(t == 'U') x++;
        if(t == 'R') y--;
        if(t == 'D') x--;
      }
      reverse(all(p));
      return true;
    }
    for(int i = 0; i < 4; i++){
      int goX = x + di[i];
      int goY = y + dj[i];
      if(isValid(goX, goY) && dist2[goX][goY] == inf){
        dist2[goX][goY] = dist2[x][y] + 1;
        parDir[goX][goY] = d[i]; 
        qp.push({goX, goY});
      }
    }
  }
  return false;
}

void runcase() {
  cin >> n >> m;
  for(int i = 0 ; i < n; i++){
    cin >> s[i];
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(s[i][j] == 'M') mons.pb({i,j});
      else if(s[i][j] == 'A') si=i, sj=j;
    }
  }
  if(isExit(si, sj)){
    cout << "YES\n" << 0;
    return;
  }
  bfs1();
  if(bfs2(si, sj)){
    cout << "YES\n" << sz(p) << '\n';
    for(auto m : p) cout << m;
  }else cout << "NO";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

