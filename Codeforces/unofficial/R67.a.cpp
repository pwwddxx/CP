#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

string rmzero(string x){
  string res = "";
  for(char y : x){
    if(y!='0'){
      res += y;
    }
  }
  return res;
}

void runcase(){
   ll a,b;
   ll sum = 0;
   cin >> a >> b;
   sum+=(a+b);
   string A = to_string(a);
   string B = to_string(b);
   string SUM = to_string(sum);
   A = rmzero(A);
   B = rmzero(B);
   SUM = rmzero(SUM);
   a = stoi(A);
   b = stoi(B);
   sum = stoi(SUM);
   cout << (a+b==sum ? "YES" : "NO" ) << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

