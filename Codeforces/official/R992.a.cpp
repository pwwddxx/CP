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
  int n,k;
  cin >> n >> k;
  int ar[n];
  inArray(ar);
  if(n==1){
    cout << "YES" << '\n';
    cout << 1 << '\n';
    return;
  }
  for(int i=0; i<n; i++){
    int cnt = 0;
    for(int j=0; j<n; j++){
      if(i!=j){
        if((abs(ar[i]-ar[j]))%k!=0){
          cnt++;
          if(cnt==n-1){
            cout << "YES" << '\n';
            cout << i+1 << '\n';
            return;
          }
        }else break;
      }
    }
  }
  cout << "NO" << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin>>t;
  while(t--) runcase();
  return 0;
}

