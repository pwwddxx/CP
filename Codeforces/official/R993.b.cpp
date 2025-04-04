#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;
#define printAr(ar) for(auto &x:(ar)){ cout << x << " "; cout << '\n';}

void runcase(){
   string s;
   cin >> s;
   for(int i=s.length()-1; i>=0; i--){
     if(s[i]=='p') cout << 'q';
     else if(s[i]=='q') cout << 'p';
     else cout << 'w';
   }
   cout << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); cin>>t;
   while(t--) runcase();
   return 0;
}

