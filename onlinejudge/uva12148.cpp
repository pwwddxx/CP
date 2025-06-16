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

bool is_new_year(int y1, int y2, int m1, int m2) {
  if(y1 - y2 > 1) return 0;
  return m1==1 && m2==12;
}

struct read {
  int day, month, year, con;
};

void runcase() {
  int N;
  int lastDayOf[] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  while(cin >> N && N) {
    vector<struct read> v;

    int temp = N;
    while(temp--) {
      struct read x;
      cin >> x.day >> x.month >> x.year >> x.con;
      v.emplace_back(x);
    }

    int sum = 0, cnt = 0;
    for(int i = 1; i < v.size(); i++) {
      
      // same year
      if(v[i].year == v[i-1].year) {
        //same month
        if(v[i].month == v[i-1].month && (v[i].day - v[i-1].day == 1)) {
          sum += (v[i].con - v[i-1].con);
          cnt++;
        } 
        // month diff by 1
        else if(v[i].month - v[i-1].month == 1) {
          if(v[i-1].month == 2) {
            if(is_leap_year(v[i].year)) {
              if(v[i-1].day == 29 && v[i].day == 1) sum += (v[i].con - v[i-1].con), cnt++;
            }
            else if(v[i-1].day == 28 && v[i].day == 1) sum += (v[i].con - v[i-1].con), cnt++;
          }
          else {
            int d = lastDayOf[v[i-1].month];
            if(v[i].day== 1 && v[i-1].day == d) sum += (v[i].con - v[i-1].con), cnt++;;
          }
        }
      }
      // new year 
      else if(v[i].year - v[i-1].year == 1){
        if(v[i].month == 1 && v[i-1].month == 12) {
          if(v[i].day == 1 && v[i-1].day == 31) sum += (v[i].con - v[i-1].con), cnt++;
        }
      }
    }
    cout << cnt << ' ' << sum << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t(1); //cin >> t;
  while (t--) runcase();
  return 0;
}

