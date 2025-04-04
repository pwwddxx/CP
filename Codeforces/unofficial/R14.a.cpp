#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void runcase(){
  int n,m;
  cin >> n >> m;
  int len=0,j2=0;
  int j1=51,ft=51;
  char rec[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> rec[i][j];
      if(rec[i][j]=='*'){
        j1 = min(j1,j);
        j2 = max(j2,j);
        ft = min(ft,i);
        len = max(len,i);
      }
    }
  }
  for(int i=ft; i<=len; i++){
    for(int j=j1; j<=j2; j++){
      cout << rec[i][j];
    }
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin>>t;
  while(t--) runcase();
  return 0;
}
