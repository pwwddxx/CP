#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

string wub = "WUB";

void solve() {
  string s;
  cin >> s;
  while(s.find(wub) != string::npos){
    int idx = s.find(wub);
    bool ok = false;
    if(idx!=0 && idx!=s.length()-3 && s.substr(idx+3,3)!=wub){
      s.insert(idx," ");
      ok = true;
    }
    if(ok){
      s.erase(idx+1,3);
    }else
    s.erase(idx,3);
  }
  cout << s << endl;
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();  
  return 0;
}

