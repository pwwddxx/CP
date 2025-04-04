#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
   int k; cin >> k;
   vector<int> cnt(9,0);
   char a[16];
   for(int i=0; i<16; i++){
      cin >> a[i];
     if(isdigit(a[i]))
      cnt[a[i]-'0'-1]++;
   }
   for(int x : cnt){
     if(ceil(double(x)/2)>k){
       cout << "NO";
       return;
     }
   }
   cout << "YES";
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1);// cin>>t;
   while(t--) runcase();
   return 0;
}

