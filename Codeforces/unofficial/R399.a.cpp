#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void solve() {
  int a;
  cin >> a;
  int temp = a;
  int steward[a];
  for(int i=0; i<a; i++){cin >> steward[i];}
  if(temp<3){cout << 0; return;}
  int ans = 0;
  sort(steward,steward+a);
  for(int i=0; i<temp; i++){
    bool weak = false;
    bool strong = false;

    if(steward[a-1]>steward[i]){strong=true;}
    if(steward[0]<steward[i]){weak=true;}
    if(strong==true && weak==true){ans++;}
  }
  cout << ans << '\n';
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

