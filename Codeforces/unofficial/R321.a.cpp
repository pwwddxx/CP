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
   int ar[n];
   for(int &x : ar){
     cin >> x;
   }
   int maxx = 0;
   for(int i=0; i<n; i++){
      int cnt = 1;
     for(int j=i+1; j<n; j++){
       if(ar[j]<ar[j-1]){
         maxx = max(maxx,cnt);
         i = j-1;
         break;
       }else
       cnt++;
       if(j==n-1) maxx = max(maxx,cnt);
     }
     if(cnt == n){cout << n << '\n'; return;}
   }
   cout << (maxx==0 ? n : maxx) << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

