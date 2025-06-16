#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Pi atan(1) * 4

ll gcd(ll a, ll b)
{
  for ( ; ;)
  {
    if (a == 0) return b;
    b %= a;
    if (b == 0) return a;
    a %= b;
  }
}

ll lcm(ll a, ll b)
{
  ll temp = gcd(a, b);

  return temp ? (a / temp * b) : 0;
}

void runcase() {
  ll n,m,a,d;
  cin >> n >> m >> a >> d;

  ll cnt1 = 0;

  cnt1 += m/a + m/(a+d) + m/(a+2*d) + m/(a+3*d) + m/(a+4*d);
  cnt1 -= m/lcm(a, a+d);
  cnt1 -= m/lcm(a, a+2*d);
  cnt1 -= m/lcm(a, a+3*d);
  cnt1 -= m/lcm(a, a+4*d);
  cnt1 -= m/lcm(a+d, a+2*d);
  cnt1 -= m/lcm(a+d, a+3*d);
  cnt1 -= m/lcm(a+d, a+4*d);
  cnt1 -= m/lcm(a+2*d, a+3*d);
  cnt1 -= m/lcm(a+2*d, a+4*d);
  cnt1 -= m/lcm(a+3*d, a+4*d);

  cnt1 += m/lcm(lcm(a, a+d), a+2*d);
  cnt1 += m/lcm(lcm(a, a+d), a+3*d);
  cnt1 += m/lcm(lcm(a, a+d), a+4*d);
  cnt1 += m/lcm(lcm(a, a+2*d), a+3*d);
  cnt1 += m/lcm(lcm(a, a+2*d), a+4*d);
  cnt1 += m/lcm(lcm(a, a+3*d), a+4*d);
  cnt1 += m/lcm(lcm(a+d, a+2*d), a+3*d);
  cnt1 += m/lcm(lcm(a+d, a+2*d), a+4*d);
  cnt1 += m/lcm(lcm(a+d, a+3*d), a+4*d);
  cnt1 += m/lcm(lcm(a+2*d, a+3*d), a+4*d);

  cnt1 -= m/lcm(lcm(lcm(a, a+d), a+2*d), a+3*d);
  cnt1 -= m/lcm(lcm(lcm(a, a+d), a+2*d), a+4*d);
  cnt1 -= m/lcm(lcm(lcm(a, a+d), a+3*d), a+4*d);
  cnt1 -= m/lcm(lcm(lcm(a, a+2*d), a+3*d), a+4*d);
  cnt1 -= m/lcm(lcm(lcm(a+d, a+2*d), a+3*d), a+4*d);

  cnt1 += m/lcm(lcm(lcm(lcm(a, a+d), a+2*d), a+3*d), a+4*d);

  ll cnt2 = 0;

  cnt2 += (n-1)/a + (n-1)/(a+d) + (n-1)/(a+2*d) + (n-1)/(a+3*d) + (n-1)/(a+4*d);
  cnt2 -= (n-1)/lcm(a, a+d);
  cnt2 -= (n-1)/lcm(a, a+2*d);
  cnt2 -= (n-1)/lcm(a, a+3*d);
  cnt2 -= (n-1)/lcm(a, a+4*d);
  cnt2 -= (n-1)/lcm(a+d, a+2*d);
  cnt2 -= (n-1)/lcm(a+d, a+3*d);
  cnt2 -= (n-1)/lcm(a+d, a+4*d);
  cnt2 -= (n-1)/lcm(a+2*d, a+3*d);
  cnt2 -= (n-1)/lcm(a+2*d, a+4*d);
  cnt2 -= (n-1)/lcm(a+3*d, a+4*d);

  cnt2 += (n-1)/lcm(lcm(a, a+d), a+2*d);
  cnt2 += (n-1)/lcm(lcm(a, a+d), a+3*d);
  cnt2 += (n-1)/lcm(lcm(a, a+d), a+4*d);
  cnt2 += (n-1)/lcm(lcm(a, a+2*d), a+3*d);
  cnt2 += (n-1)/lcm(lcm(a, a+2*d), a+4*d);
  cnt2 += (n-1)/lcm(lcm(a, a+3*d), a+4*d);
  cnt2 += (n-1)/lcm(lcm(a+d, a+2*d), a+3*d);
  cnt2 += (n-1)/lcm(lcm(a+d, a+2*d), a+4*d);
  cnt2 += (n-1)/lcm(lcm(a+d, a+3*d), a+4*d);
  cnt2 += (n-1)/lcm(lcm(a+2*d, a+3*d), a+4*d);

  cnt2 -= (n-1)/lcm(lcm(lcm(a, a+d), a+2*d), a+3*d);
  cnt2 -= (n-1)/lcm(lcm(lcm(a, a+d), a+2*d), a+4*d);
  cnt2 -= (n-1)/lcm(lcm(lcm(a, a+d), a+3*d), a+4*d);
  cnt2 -= (n-1)/lcm(lcm(lcm(a, a+2*d), a+3*d), a+4*d);
  cnt2 -= (n-1)/lcm(lcm(lcm(a+d, a+2*d), a+3*d), a+4*d);

  cnt2 += (n-1)/lcm(lcm(lcm(lcm(a, a+d), a+2*d), a+3*d), a+4*d);

  ll ans = m - n + 1 - (cnt1 - cnt2);

  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); cin >> t;
  while (t--) runcase();
  return 0;
}
