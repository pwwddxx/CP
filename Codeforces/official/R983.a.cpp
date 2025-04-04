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
    int on = 0;
    int off = 0;
    for(int i=0; i<2*n; i++){
      int x;
      cin >> x;
      if(x==0) off++;
      else on++;
    }
   // if(n==1 && on==1 && off==1){cout << 1 << " " << 1 << '\n'; continue;}
    int minimum = n - (on/2 + off/2);
    if(on==0) minimum = 0;
    int max = min(on,off);
    if(off==0 || on==0) max = 0;
    cout << minimum << " " << max << '\n';
  }
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

