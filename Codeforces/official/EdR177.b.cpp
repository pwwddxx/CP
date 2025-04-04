#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for (auto &x : (ar)) cin >> x;
#define printAr(ar) for (auto &x : (ar)) { cout << x << " "; cout << '\n' }
#define inMatrix(ar, rows, cols) for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) cin >> ar[i][j];
#define Pi atan(1) * 4

void runcase() {
  int n, k ,x;
  cin >> n >> k >> x;
  ll ar[n];
  for(int i = 0 ; i < n; i++){
    cin >> ar[i];
  
  ll sum = accumulate(ar, ar+n, 0ll);
  if(sum*k < x){ cout << "0\n"; return; }
  ll howManyWa = (x%sum==0? x/sum : x/sum + 1);
  ll tempSum = sum*howManyWa;
  ll tempAns = (n*k) - (howManyWa * n);
  int cnt = 0;
  for(int i = 0 ; i < n; i++) {
    tempSum -= ar[i];
    cnt++;
    if(tempSum < x) break;
  }
  cout << tempAns + cnt << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

