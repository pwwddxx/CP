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
  int t;
  cin >> t;
  while(t--){
    int x,y,k;
    cin >> x >> y >> k;
    int mn = min(x,y);
    cout << 0 << " " << 0 << " " << mn << " " << mn << endl;
    cout << 0 << " " << mn << " " << mn << " " << 0 << endl;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

