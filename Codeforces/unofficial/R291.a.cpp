#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void solve() {
   string s;
   cin >> s;
   for(int i=0; i<s.length(); i++){
     if(i==0){
       if(s[i]=='9'){
         continue;
       }else{
         if(s[i]-'0'>4) s[i]=('0'+9 -(s[i]-'0'));
       }
     }
     else{
       if(s[i]-'0'>4){
         s[i]= ('0'+9-(s[i]-'0'));
       }
     }
   }
   cout << s << '\n';
   return;	
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve(); 
   return 0;
}

