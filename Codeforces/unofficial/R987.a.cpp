#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n; cin >> n;
    int ar[n];
    vector<int> cnt(n,0);
    for(int i=0; i<n; i++){
      cin >> ar[i];
      cnt[ar[i]-1]++;
    }
    int maxx = *max_element(cnt.begin(),cnt.end());
    cout << n-maxx << '\n';
  }
}
