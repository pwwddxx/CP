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
  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  cout << abs(arr[0]-arr[1]) << " " << abs(arr[n-1]-arr[0]) << endl;
  for(int i=1; i<n-1; i++){
    cout << min(abs(arr[i]-arr[i-1]),abs(arr[i+1]-arr[i])) << " " << max(abs(arr[i]-arr[n-1]),abs(arr[i]-arr[0])) << endl;
  }
  cout << abs(arr[n-1]-arr[n-2]) << " " << abs(arr[n-1]-arr[0]) << '\n';
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve(); 
  return 0;
}

