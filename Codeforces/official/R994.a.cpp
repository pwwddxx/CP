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

void runcase(){
  int n; cin >> n;
  int ar[n];
  inArray(ar);
  if(count(ar,ar+n,0) == 0){ cout << 1 << '\n'; return;}
  if(count(ar,ar+n,0) == n){ cout << 0 << '\n'; return;}
  if(count(ar,ar+n,0) == 2){
    if(ar[0]==0 && ar[n-1]==0){
      cout << 1 << '\n';
      return;
    }
  }
  if(count(ar,ar+n,0) == 1){
    if(ar[0]==0 || ar[n-1]==0){
      cout << 1 << '\n';
      return;
    }
  }
  int cnt = 0;
  for(int i=0; i<n-1; i++){
    if(ar[i]==0){
    for(int j=i+1; j<n; j++){
      if(ar[j] != 0){
        cnt++;
        i = j -1;
        break;
      }
    }
    }
  }
  if(ar[0]!=0) cnt++;
  cout << (cnt > 1 ? 2 : 1) << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin>>t;
  while(t--) runcase();
  return 0;
}

