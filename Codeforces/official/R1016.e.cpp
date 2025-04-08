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
  int n, k;
  cin >> n >> k;
  int ar[n];
  inArray(ar);
  // sort(ar,ar+n);
  if(n == k){
    if(count(ar, ar+n, 0) == n){
      cout << "1\n";
    }
    else{
      cout << "0\n";
    }
  } 
  else {
    if(count(ar, ar+n, 0) == 0){
      cout << "0\n";
    }
    else if(k == 1){
    unordered_set<int> seen(ar, ar+n);
    int missing = 1;
    while (seen.count(missing)) {
        missing++;
    }
    cout << missing << '\n';
    }
    else{
      if(ar[0] == 0 || ar[n-1] == 0){
        cout << "1\n";
      }
      else{
      cout << *max_element(ar,ar+n) + 1 << '\n';
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

