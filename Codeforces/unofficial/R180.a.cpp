#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

void runcase(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int R=0, L=0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='R') R++;
    else if(s[i]=='L') L++;
  }
  if(L==1){cout << s.find('L')+1 << " " << s.find('L'); return;}
    if(R==0 || L==0){
    int idx;
    if(R==0){
      for(int i=s.length()-1; i>=0; i--){
        if(s[i]=='L'){ idx = i; cout << i+1 << ' '; break;}
      }
      cout << s.find('L');
    }else{
      cout << s.find('R')+1 << " ";
      for(int i=s.length()-1; i>=0; i--){
        if(s[i]=='R'){ idx = i; cout << i+2 << ' '; break;}
      }
    }
  }else{
    cout << s.find('L')+2 << " " << s.find('L')+1;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1);// cin>>t;
  while(t--) runcase();
  return 0;
}

