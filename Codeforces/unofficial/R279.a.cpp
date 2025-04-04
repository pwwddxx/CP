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
  int n;
  int o = 0,t = 0,tr = 0;
  cin >> n;
  vt<int> one;
  vt<int> two;
  vt<int> three;
  for(int i=0; i<n; i++){
    int x; cin >> x;
    if(x==1){ o++; one.pb(i+1); }
    if(x==2){ t++; two.pb(i+1); }
    if(x==3){ tr++; three.pb(i+1);}
  }
  if(o!=0 && t!=0 && tr!=0){
    int round = min(min(o,t),tr);
    cout << round << endl;
   // int round = min(min(sz(one),sz(two)),sz(three));
    for(int i=0; i<round; i++){
      cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
  }
  else{
    cout << 0 << endl;
  }
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

