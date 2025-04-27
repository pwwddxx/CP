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
  int n;
  cin >> n;
  int ar[n+1][n+1];
  inMatrix(ar, n, n);
  vector<int> ans(2*n + 1, 0);
  set<int> st;
  for(int i = 0; i < n; i++){
    for(int j = 0 ; j < n; j++){
      int sum = 2 + i + j;
      if(ans[sum] == 0) ans[sum] = ar[i][j];
      st.insert(ar[i][j]);
    }
  }
  for(int i = 1; i <= 2*n; i++){
    if(st.find(i) == st.end()){
      ans[1] = i;
      break;
    }
  }

  //   for(auto number : ans){
  //   cout << number << " ";
  // }
  for(int i = 1; i < 2*n; i++){
    cout << ans[i] << ' ';
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

