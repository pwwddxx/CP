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
  int n,x;
  cin >> n >> x;
  while(n--){
    int a,b;
    cin >> a >> b;
    if( a==7-x || a==x || b==7-x || b==x){
      cout << "NO" << '\n';
      return;
    }
  }
  cout << "YES" << '\n';
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

