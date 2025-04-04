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
  int a[n],b[n];
  inArray(a);
  inArray(b);
  if(n==1){
    cout << a[0] << '\n';
    return;
  }
  int suma = a[n-1], sumb = 0;
  for(int i=0; i<n-1; i++){
    if(a[i] > b[i+1]){
      suma+=a[i];
      sumb+=b[i+1];
    }
  }
  cout << abs(suma - sumb) << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin>>t;
  while(t--) runcase();
  return 0;
}

