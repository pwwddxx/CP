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
   multiset<int> vec;
   int target = n-2;
   for(int i=0; i<n; i++){
     int x;
     cin >> x;
     if((n-2)%x==0 && count(all(vec),x)<3) vec.emplace(x);
   }
   for(auto i=vec.begin(); i!=vec.end(); i++){
     for(auto j=vec.begin(); j!=vec.end(); j++){
       if(i!=j && *i * (*j) == target){
         cout << *i << " " << *j << '\n';
         return;
       }
     }
   }
}
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); cin>>t;
   while(t--) runcase();
   return 0;
}

