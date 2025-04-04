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
  int n,t;
  cin >> n >> t;
  if(n==1 && t!=10){cout << t; return;}
  else if(n==1 && t==10){cout << -1; return;}
  string s(n-2,'3');
  if(t==2 || t==4 || t==5 || t==6 || t==10 || t==3) cout << s + "60" << '\n';
  if(t==7){string unq(n-1,'0'); cout << '7'+unq << '\n';}
  string unq2(n-2,'0');
  if(t==8 || t==9) cout << "72"+unq2 << '\n';
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

