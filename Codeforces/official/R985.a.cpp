#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void solve() {
  int t;
  cin >> t;
  while(t--){
    int a,b,k;
    cin >> a >> b >> k;
    if(b/k >= a) cout << (b/k)-a+1 << '\n';
    else{
      cout << 0 << '\n';
    }
  }
  return;	
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve(); 
   return 0;
}

