#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int n,k; cin >> n >> k;
  int a[n],b[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];
  ll ok = count(b,b+n,-1);
  if(ok != n) {
    int mxS = 0;
    int temp = 0;
    bool ft = 1;
    for(int i = 0; i < n; i++) { 
      if(b[i] != -1 && ft) {
        mxS = b[i] + a[i];
        temp = mxS;
        ft = 0;
      }
      else if(b[i] != -1) {
        mxS = b[i] + a[i];
        if(temp != mxS) {
          cout << "0\n";
          return;
        }
      }
    }
    int mxN = *max_element(a,a+n);
    if(mxN > mxS) {
      cout << "0\n";
      return;
    }
    for(int i = 0; i < n; i++) {
      if(k + a[i] >= mxS) {
        continue;
      }
      else {
        cout << "0\n";
        return;
      }
    }
    cout << "1\n";
  }
  else {
    int mnN = *min_element(a,a+n);
    int mxN = *max_element(a,a+n);
    cout << k+1 - ((k+mxN) - (k+mnN)) << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

