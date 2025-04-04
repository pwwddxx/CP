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
  ll n,k;
  cin >> n >> k;
  ll mid = ceil((double)n/2);
  if(k<=mid){
    cout << 2*k - 1;
  }else{
    cout << 2*(k-mid);
  }
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();  
  return 0;
}

