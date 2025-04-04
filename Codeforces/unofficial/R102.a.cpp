#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;  

void runcase(){
  int r1,r2,c1,c2,d1,d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  int a = (c1+d1-r2)/2;
  if(a<1 || a>9){cout << -1; return;}
  int b = r1-a;
  if(b<1 || b>9 || b==a){cout << -1; return;}
  int c = c1-a;
  if(c<1 || c>9 || c==b || c==a){cout << -1; return;}
  int d = d1-a;
  if(d<1 || d>9 || d==a || d==b || d==c){cout << -1; return;}
  cout << a << " " << b << '\n';
  cout << c << " " << d << '\n';

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin>>t;
  while(t--) runcase();
  return 0;
}

