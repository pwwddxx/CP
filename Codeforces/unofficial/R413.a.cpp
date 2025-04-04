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
  int n,t,k,d;
  cin >> n >> t >> k >> d;
  if(k>=n){cout << "NO"; return;}
  int ans = t*(ceil((double)n/k)) - d;
  cout << (ans > t ? "YES" : "NO") << endl; 
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

