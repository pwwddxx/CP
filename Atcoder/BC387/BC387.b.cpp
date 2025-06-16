#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;
#define printAr(ar) for(auto &x:(ar)){ cout << x << " "; cout << '\n';}
#define inMatrix(ar, rows, cols) for(int i=0; i<rows; ++i) for(int j=0; j<cols; ++j) cin >> ar[i][j];

void runcase(){
  int x; cin >> x;
  int minus = 0;
  for(int i = 1; i <= 9; i++){
    if(x % i == 0 && x / i <= 9) minus++;
  }
  cout << ( 2025 - (minus * x )) << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin>>t;
  while(t--) runcase();
  return 0;
}

