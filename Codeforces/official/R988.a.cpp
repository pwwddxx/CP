#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
   int n;
   cin >> n;
   vector<int> v(n,0);
   for(int i=0; i<n; i++){
     int x; cin >> x;
     v[x-1]++;
   }
   int ans = 0;
   for(int i=0; i<n; i++){
     ans+=v[i]/2;
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

