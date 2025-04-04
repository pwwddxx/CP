#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
   int n; cin >> n;
   vector<int> sum(3,0);
   while(n--){
     int a,b,c;
     cin >> a >> b >> c;
     sum[0]+=a; sum[1]+=b; sum[2]+=c;
   }
  cout << (sum[0]==0 && sum[1]==0 && sum[2]==0 ? "YES" : "NO") << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

