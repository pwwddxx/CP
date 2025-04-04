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
  vector<int> ar(n);
  map<int, int> mp;
  bool ok = false;
  int square = 0;

  for(int i = 0; i < n; i++){
    int x; cin >> x;
    ar[i] = x;
    mp[x]++;
    if(mp[x] == 4){ 
      ok = true; 
      square = x; 
    }
  }

  if(ok){
    for(int i = 0; i < 4; i++){
      cout << square << " ";
    }
    cout << '\n';
    return;
  }
  sort(all(ar));
  vector<int> ans;
  for(auto &cnt : mp){
    if(cnt.second > 1) ans.emplace_back(cnt.first); 
  }

  if(sz(ans) == 0){
    cout << -1 << '\n';
    return;
  }

  if(sz(ans) > 1){
    cout << ans[0] << " " << ans[0] << " " << ans[1] << " " << ans[1] << '\n';
    return;
  }

  if(sz(ans) == 1){
    int count = 2; 
    auto it = ar.begin();
    while (count > 0 && it != ar.end()) {
      it = find(it, ar.end(), ans[0]);
      if (it != ar.end()) {
        it = ar.erase(it);
        count--;
      }
    }

    int legs = ans[0];
    for(int i = 0; i < sz(ar) - 1; i++){
      if(ar[i]+2*legs > ar[i+1]){
        cout << legs << " " << legs << " " << ar[i] << " " << ar[i+1] << '\n';
        return;
      }
    }
    cout << -1 << '\n';
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin>>t;
  while(t--) runcase();
  return 0;
}

