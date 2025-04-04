#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
   string s; 
   cin >> s;
   string snew;
   for(char &x : s) snew+= tolower(x);
   string check = "aeiouy";
   for(int i=0; i<s.length(); i++){
     if(check.find(snew[i])!=string::npos) continue;
     else{
       cout << '.' << snew[i];
     }
   }

}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); //cin>>t;
   while(t--) runcase();
   return 0;
}

