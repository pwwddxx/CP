#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

int mul(char a, char b) {
  return (a-'0') * (b-'0');
}

void runcase() {
  string a,b;
  while(cin >> a >> b) {
    if(a == "0" || b == "0") { cout << "0\n"; continue;}
    vector<int> res(a.length() + b.length(), 0);

    if(a.length() < b.length()) swap(a,b);
     
    for(int i = b.length() - 1; i >= 0; i--) {
      for(int j = a.length() - 1; j >= 0; j--) {
        int R = mul(b[i], a[j]) + res[i+j+1];
        res[i+j+1] = R%10;
        res[i+j] += R/10;
      }
    }
    string ans;
    for(int i = 0; i < res.size(); i++) {
      ans += to_string(res[i]);
    }
    if(ans[0] == '0') {
      int idx;
      for(int i = 0; i < res.size(); i++) {
        if(ans[i] != '0') {
          idx = i;
          break;
        }
      }
      ans.erase(0, idx);
    }
    cout << ans << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

