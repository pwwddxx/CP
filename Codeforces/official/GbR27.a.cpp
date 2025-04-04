#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void solve(){
  int t;
  cin >> t;
  while(t--){
    ll n,m,r,c;
    cin >> n >> m >> r >> c;
    ll out = (r-1)*m +c;
    ll sum = 0;
    ll precal = (((m*n)-out));
    ll divide = out/m;
    if(out%m!=0) divide+=1;
    ll jump = ((m*n)/m) - divide;
    sum+=(jump*m);
    ll left = (precal) - jump;
    sum+=left;
    cout << sum << endl;
  }
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}  
