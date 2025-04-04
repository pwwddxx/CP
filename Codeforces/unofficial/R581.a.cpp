#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
  string s; cin >> s;
  int cnt = 0;
  int has = 0;
  for(char x : s){
    if(x=='1') has++;
    if(has > 1 ) break;
  }
  for(int i=s.length()-1; i>=0; i-=2){
    cnt++;
    if(i==0){
      cnt+= has > 1 ? 0 : -1;
    }
  }
  cout << cnt << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1);// cin>>t;
   while(t--) runcase();
   return 0;
}

