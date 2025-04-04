#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

bool isPrime(int n) {
  
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

void runcase(){
   int n;
   cin >> n;
   if(n<5){cout << -1 << '\n'; return;}
   vector<int> cnt[2];
   for(int i=1; i<=n; i++){
     if(i%2==0) cnt[0].pb(i);
     else cnt[1].pb(i);
   }
 // for(int x : cnt[1]){ cout << x << " "; }
  int tmp = 0;
  bool ok = false;
  for(int i=0; i<sz(cnt[0]); i++){
    if(!isPrime(cnt[0][i]+cnt[1][sz(cnt[1])-1])){
     // cout << cnt[0][i] << " ";
      tmp = cnt[0][i];
      ok = true;
      break;
    }
  }
  if(!ok){cout << -1 << '\n'; return;}
  for(int x : cnt[1]){ cout << x << " "; }
  cout << tmp << " ";
  for(int i=0; i<sz(cnt[0]); i++){
    if(cnt[0][i] != tmp){
      cout << cnt[0][i] << " ";
    }
  }
  cout << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); cin>>t;
   while(t--) runcase();
   return 0;
}

