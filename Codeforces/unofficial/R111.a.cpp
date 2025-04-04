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
  int n;
  cin >> n;
  int sum = 0;
  int value[n];
  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    sum+=x;
    value[i]=x;
  }
  sort(value,value+n);
  int ans = 0;
  int take = ceil((double)sum/2);
  int i = n-1;
  while(sum >= take){
    sum-=value[i];
    i--;
    ans++;
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

