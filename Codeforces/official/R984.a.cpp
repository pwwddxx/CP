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
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
      int x; cin >> x;
      a[i] = x;
    }
    bool ok = false;
    for(int i=0; i<n-1; i++){
      if(abs(a[i+1]-a[i]) !=5 && abs(a[i+1]-a[i])!=7){
        cout << "NO" << endl;
        ok = true;
        break;
      }
    }
      if(!ok){cout << "YES" << endl;}
  }
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

