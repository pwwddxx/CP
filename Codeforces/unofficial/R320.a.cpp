#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
   int n;
   cin >>n;
   if(!(n&(n-1))){cout << 1; return;}
   string s = "";
   while(n>0){
     s = to_string(n%2) + s;
     n/=2;
   }
  int ans = 0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='1') ans++;
  }
  cout << ans << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

