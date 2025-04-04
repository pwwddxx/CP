#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define inArray(ar) for(auto &x:(ar)) cin >> x;
#define printAr(ar) for(auto &x:(ar)){ cout << x << " "; cout << '\n';}

void runcase(){
   ll m,a,b,c;
   cin >> m >> a >> b >> c;
   ll ans = 0;
   ll left = 0;
   ans+=min(m,a);
   if(!(a>m))
   left+=abs(m-a);
   ans+=min(m,b);
   if(!(b>m))
   left+=abs(m-b);
   ans+=min(left,c);
   cout << ans << '\n';
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); cin>>t;
   while(t--) runcase();
   return 0;
}

