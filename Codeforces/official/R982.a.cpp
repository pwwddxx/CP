#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void solve(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int maxx = 0;
    int maxx2 = 0;
    while(n--){
      int a,b;
      cin >> a >> b;
      maxx = max(maxx,a);
      maxx2 = max(maxx2,b);
    }
    cout << 2 * (maxx + maxx2) << endl;
  }
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}  
