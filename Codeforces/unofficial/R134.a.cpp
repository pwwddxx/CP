#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
 
void runcase(){
  int n,k;
  cin >> n >> k;
  int ar[2*n+1];
  for(int i=0; i<2*n+1; i++){
    cin >> ar[i];
  }
  for(int i=1; i<2*n+1; i++){
    if(ar[i]-1 > ar[i-1] && ar[i]-1 > ar[i+1]){
      ar[i]--;
      k--;
      if(k==0) break;
    }
  }
  for(int x : ar){
    cout << x << ' ';
  }
}
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin>>t;
  while(t--) runcase();
  return 0;
}
