#include <iostream>
#include <algorithm>
using namespace std;

void runcase() {
  int n,k; cin >> n >> k;
  int ar[n];
  for(int i = 0; i < n; i++) cin >> ar[i];
  sort(ar, ar+n);
  int lm = (n-k-1)/2;
  int rm = n-1-lm;
  int ans = ar[rm] - ar[lm] + 1;
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) runcase();
  return 0;
}
