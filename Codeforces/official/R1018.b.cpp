#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ld long double
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for (auto &x : (ar)) cin >> x;
#define inMatrix(ar, rows, cols) for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) cin >> ar[i][j];
#define Pi atan(1) * 4

void runcase() {
  int n,k;
  cin >> n >> k;
  vector<ll> l(n), r(n), more(n);
  for(int i = 0; i < n; i++){
    cin >> l[i];
  }
  for(int i = 0; i < n; i++){
    cin >> r[i];
  }
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    if(l[i] > r[i]){
      sum += l[i];
      more.push_back(r[i]);
    }
    else{
      sum += r[i];
      more.push_back(l[i]);
    }
  }
  sort(more.rbegin(), more.rend());
  for(int i = 0; i < k-1; i++) sum+=more[i];
  cout << sum + 1 << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

