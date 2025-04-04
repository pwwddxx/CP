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
  string a,b;
  cin >> a >> b;
  int len1 = a.length();
  int len2 = b.length();
  if(len1 != len2) cout << max(len1,len2) << '\n';
  else{
    for(int i=0; i<len1; i++){
      if(a[i]!=b[i]){
        cout << len1;
        return;
      }
    }
    cout << -1;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

