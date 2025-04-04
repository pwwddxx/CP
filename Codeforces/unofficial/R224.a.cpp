#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

void runcase(){
  string s,w;
  cin >> s >> w;
  int cntL = 0, cntR = 0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='|') break;
    else cntL++;
  }
  cntR = s.length()-cntL - 1;
  int mn = min(cntL,cntR);
  if(w.length()+mn == cntL || w.length()+mn == cntR){
    if(cntL<cntR){s = w+s; cout << s;}
    else{s = s+w; cout << s;}
    return;
  }
  if(cntR == cntL){
    if(w.length()%2==0){
      s = w.substr(0,w.length()/2) + s;
      s = s + w.substr(w.length()/2);
      cout << s;
    }
    else cout << "Impossible";
    return;
  }

  int remaining = w.length() - ((s.length() - mn - 1) - mn);
 // cout << remaining << endl;
  if (remaining < 0) {
    cout << "Impossible" << endl;
    return;
  }
  if((w.length()-(s.length()-mn-1)-mn)%2==0 ){
    if(cntL < cntR){
      s = w.substr(0,cntR-mn+((w.length()-(cntR-mn))/2)) + s;
      s = s + w.substr(cntR-mn+((w.length()-(cntR-mn))/2));
      cout << s;
    }else{
      s = s + w.substr(0,cntL-mn+((w.length()-(cntL-mn))/2));
      s = w.substr(cntL-mn+((w.length()-(cntL-mn))/2)) + s;
      cout << s;
    }
  }
  else cout << "Impossible" << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin>>t;
  while(t--) runcase();
  return 0;
}

