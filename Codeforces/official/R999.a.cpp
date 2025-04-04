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
  int n; cin >> n;
  map<int,int> mp;
  for(int i=0; i<n; i++){
    int x; cin >> x;
    if(x%2) mp[1]++;
    else mp[0]++;
  }
  if(mp[1] == n){
    cout << n - 1 << '\n';
  }
  else if(mp[0] == n){
    cout << 1 << '\n';
  }
  else{
    cout << mp[1] + 1 << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin>>t;
  while(t--) runcase();
  return 0;
}

