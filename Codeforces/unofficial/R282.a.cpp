#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

void runcase(){
   map<char, int> mp = 
        {{'0', 2}, {'6', 2}, {'9', 2}, {'2', 2},
         {'7', 5}, {'1', 7}, {'5', 4}, {'8', 1},
         {'3', 3}, {'4', 3}
    };
   string s; cin >> s;
   int fst = mp[s[0]];
   int snd = mp[s[1]];
   cout << fst*snd << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

