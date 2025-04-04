#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void solve() {
  int m,n;
  cin >> m >> n;
  ll rmdA[5] = {0};
  ll rmdB[5] = {0};
  ll ans = 0;
  for(int i=1; i<n+1; i++){
    rmdA[i%5]++;
  }
  for(int j=1; j<m+1; j++){
    rmdB[j%5]++;
  }
  ans += (rmdA[0]*rmdB[0]+
          rmdA[1]*rmdB[4]+
          rmdA[2]*rmdB[3]+
          rmdA[3]*rmdB[2]+
          rmdA[4]*rmdB[1]);
  cout << ans << '\n';
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

