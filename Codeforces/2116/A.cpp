#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

void runcase() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(b == 1 || d == 1) cout << "Gellyfish\n";
  else if( a < b ) cout << (d>c || (d<=c && d>a) ? "Flower\n" : "Gellyfish\n");
  else if( a >= b ) cout << ( c >= d || (c < d && c >= b) ? "Gellyfish\n" : "Flower\n");
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}
