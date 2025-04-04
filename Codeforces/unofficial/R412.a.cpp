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
  vector<pair<int,int>> rating;
  for(int i=0; i<n; i++){
    int a,b;
    cin >> a >> b;
    if(a!=b){cout << "rated"; return;}
    rating.push_back(make_pair(a,b));
  }
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(rating[i].first < rating[j].first){
        cout << "unrated"; return;
      }
    }
  }
  cout << "maybe";
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

