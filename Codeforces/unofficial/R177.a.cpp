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
   int sum = 0;
   while(n--){
     int a,b;
     cin >> a >> b;
     sum+=(b-a+1);
   }
   if(sum%k==0)cout << 0 << '\n';
   else{
     int ans = 0;
     while(sum%k!=0){
       sum+=1;
       ans++;
     }
     cout << ans << '\n';
   }
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

