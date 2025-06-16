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

ll mem[51];

ll fact(int n){
  if(n==0) return 1;
  if(mem[n] != 0) return mem[n];
  return n * fact(n-1);
}

void runcase(){
  ll n; cin >> n;
  for(int i=1; i<50; i++){
    if(fact(i) == n){
      cout << i << '\n';
      return;
    }
    else{
      mem[i] = fact(i);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin>>t;
  while(t--) runcase();
  return 0;
}

