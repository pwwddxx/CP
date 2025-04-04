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
#define inMatrix(ar, rows, cols) for(int i=0; i<rows; ++i) for(int j=0; j<cols; ++j) cin >> ar[i][j];

void runcase(){
  int n,a,b,c;
  cin >> n >> a >> b >> c;
  ll sum = a+b+c;
  ll days = 0;
  ll cycle = n/sum;
  ll howmuchKM = cycle * sum;
  ll day = cycle * 3;
  if(howmuchKM >= n){cout << day << '\n'; return;}

  if(howmuchKM + a >= n){
    day+=1;
  }
  else if(howmuchKM + a + b >= n){
    day+=2;
  }
  else day+=3;

  cout << day << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin>>t;
  while(t--) runcase();
  return 0;
}

