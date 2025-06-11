#include <bits/stdc++.h>
using namespace std;

void DBG() {
  cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
  cerr << to_string(h);
  if(sizeof...(t))
    cerr << ", ";
  DBG(t...);
}
#ifdef LOCAL
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 42
#endif

void dbg2(int32_t array[], int32_t n) {
  cerr << "array --> [";
  for(int32_t i = 0; i < n; i++) {
    cerr << array[i];
    cerr << (i == n-1 ? "]" : ", ");
  }
  cerr << '\n';
}

#define ll long long
#define ld long double
#define Pi atan(1) * 4

bool is_leap_year(int year) {
  if(year%4==0 && year%100!=0) return 1;
  return year%400==0;
}

struct read {
  int day, month, year, con;
};

void runcase() {
  int n; 
  cin >> n;
  int ar[n];
  for(int i = 0; i < n; i++) {
    cin >> ar[i];
  }
  dbg2(ar, n);
  // int N; cin >> N;
  // vector<struct read> v;
  // while(N--) {
  //   struct read x;
  //   cin >> x.day >> x.month >> x.year >> x.con;
  //   v.emplace_back(x);
  // }
  // int sum = 0;
  // for(int i = 0; i < v.size(); i++) {
  //   if(v[i].month == 2 && is_leap_year(v[i].month)) {
  //     if() 
  //   }
  // }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

