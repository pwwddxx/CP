#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
  int n,m;
  cin >> n >> m;
  int ans = 0;
  for(int i=0; i<=33; i++){
    for(int j=0; j<=33; j++){
      if((i*i)+j==n && (j*j)+i==m) ans++;
    }
  }
  cout << ans << '\n';
  return;	
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

