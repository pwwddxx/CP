#include <bits/stdc++.h>
using namespace std;

#define inArray(ar) for(auto &x:(ar)) cin >> x;

void runcase(){
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> ar(n);
  vector<int> kar(k);
  vector<int> temp(m);
  inArray(temp);
  inArray(kar);
  for(int i = 0; i < n; i++) {
    ar[i] = i + 1;
  }
  for(int i = 0; i < k; i++) {
    if(kar[i] >= 1 && kar[i] <= n){
      ar[kar[i] - 1] = 0;
    }
  }
  vector<int> non_zero;
  for(int j = 0; j < n; j++) {
    if(ar[j] != 0){
      non_zero.push_back(j);
    }
  }
  string s;
  for(int i = 0; i < m; i++){
    bool ok = false;
    for(auto j : non_zero){
      if(i != j){
        s += '0';
        ok = true;
        break;
      }
    }
    if(!ok){
      s += '1';
    }
  }
  cout << s << '\n';
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    runcase();
  }
  return 0;
}
