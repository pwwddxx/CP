#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

void solve() {
  char d;
  cin >> d;
  string a;
  cin >> a;
  for(int i=0; i<a.length(); i++){
    for(int j=0; j<s.length(); j++){
      if(a[i] == s[j]){
        cout << (d=='R' ? s[j-1] : s[j+1]);
      }
    }
  }
  cout << '\n';
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

