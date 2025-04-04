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
   vector<int> check[2];
   for(int i=0; i<n; i++){
     int x; cin >> x;
     if(x%2==0) check[0].pb(i);
     else check[1].pb(i);
   }
   if(sz(check[0]) > sz(check[1])) cout << check[1][0]+1;
   else cout << check[0][0]+1;
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

