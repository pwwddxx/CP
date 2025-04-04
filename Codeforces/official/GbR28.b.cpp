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
  int MnN = 1;
  int MxN = n;
  for(int i = 0; i<n; i++){
    if((i+1)%k==0){ cout << MnN << " ";  MnN++; }
    else{
      cout << MxN << " ";
      MxN--;
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

