#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

void runcase(){
  int n,m,k;
  cin >> n >> m >> k;
  string b;
  cin >> b;
  int ans = 0;
  for(int i=0; i<b.length(); i++){
    if(b[i]=='0'){
      int cnt = 0;
      for(int j=i; j<b.length(); j++){
        if(b[j]=='0'){
          cnt++;
          if(cnt == m){ ans++; i = j+k-1; break;}
        }else{
          i = j - 1;
          break;
        }
      }
    }
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin>>t;
  while(t--) runcase();
  return 0;
}

