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
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0;
    int y = 0;
    bool ok = false;
    int temp = 101;
    while(temp--){
    if(ok){break;}
    for(int i=0; i<s.length(); i++){
        if(s[i]=='N') y++;
        else if(s[i]=='E') x++;
        else if(s[i]=='W') x--;
        else y--;
        
        if(x==a && y==b){
            ok=true;
            break;
        }
        //cout << x << " " << y << endl;
    }
}
cout << (ok==true ? "YES" : "NO") << endl;
  }
  return;	
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve(); 
   return 0;
}
