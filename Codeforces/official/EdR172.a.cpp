#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

void runcase(){
   int n,k;
   cin >> n >> k;
   int ans = 0;
   bool ok = false;
   int ar[n];
   inArray(ar);
   sort(ar,ar+n,greater<int>());
   int sum = 0;
   for(int x : ar) {
     sum+=x;
     if(sum>k){
        sum-=x;
        ans = k-sum;
        ok = true;
        break;
     }
   }
   if(!ok) ans = k-sum;
   cout << ans << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); cin>>t;
   while(t--) runcase();
   return 0;
}

