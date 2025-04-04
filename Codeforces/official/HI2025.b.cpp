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
  int n,k;
  map<int,int> mp;
  set<int> st;
  cin >> n >> k;
  for(int i=0; i<n; i++){
    int x; cin >> x;
    mp[x]++;
    st.insert(x);
  }
  vector<int> howMany;
  for(auto num : st){
    howMany.emplace_back(mp[num]);
  }
  sort(all(howMany));
  bool ok = false;
  while(k > 0 && !ok){
    for(int i=0; i<sz(howMany); i++){
      if(k < 1) break;
      int tmp = howMany[i];
      howMany[i] -= min(k,howMany[i]);
      k -= min(k,tmp);
      if(i == sz(howMany) - 1 && k > 0){
        ok = true;
      }
    }
  }
  int ans = 0;
  for(int remain : howMany){
    if(remain != 0) ans++;
  }
  if(count(all(howMany), 0) == sz(howMany)) ans = 1;
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin>>t;
  while(t--) runcase();
  return 0;
}

