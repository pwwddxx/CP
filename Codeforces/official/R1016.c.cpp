#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for (auto &x : (ar)) cin >> x;
#define printAr(ar) for (auto &x : (ar)) { cout << x << " "; cout << '\n' }
#define inMatrix(ar, rows, cols) for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) cin >> ar[i][j];
#define Pi atan(1) * 4

bool isPrime(int n) {
    if (n <= 1) return false;
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true; 
}

void runcase(){
  int x, k;
  cin >> x >> k;
  if(x == 1 && k != 2){
    cout << "NO\n";
    return;
  }
  else if(x == 1 && k == 2){
    cout << "YES\n";
    return;
  }
  else {
    if(isPrime(x) && k == 1){
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}

