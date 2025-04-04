#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

void runcase(){
   int n; cin >> n;
   vector<int> cnt(1001,0);
   for(int i=0; i<n; i++){
     int x;
     cin >> x;
     cnt[x]++;
   }
   int alone = 0;
   int ans = 0;
   for(int i=0; i<1002; i++){
     if(cnt[i]==1){
       alone++;
     }
   }
   ans += (alone==1 ? 2 : (ceil((double)alone/2)*2));
   int howMany = 0;
   for(int i=0; i<1002; i++){
     if(cnt[i]!=1 && cnt[i]!=0){
       ans+=1;
     }
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

