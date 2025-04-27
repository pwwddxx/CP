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

void runcase() {
  int n,m,l,r;
  cin >> n >> m >> l >> r;
  if(n == m){
    cout << l << " " << r << '\n';
    return;
  }
  else{
    int x = -l;
    int lm = (m < x ? m : x);
    int rm = m - lm;
    cout << -lm << " " << rm << '\n';
}
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

