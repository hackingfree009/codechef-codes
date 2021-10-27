//Code By indsaiyan
#include <bits/stdc++.h>
#define PB push_back
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef vector<ll> vl;
typedef vector<lli> vll;
// typedef map<ll, ll> mp;
// typedef pair<ll, ll> pl;
// typedef stack<ll> sl;
// typedef queue<ll> ql;
// typedef deque<ll> dl;
#define F first
#define S second
#define MP make_pair
#define endl "\n"
//------------------------- Solution ---------------------------
void solve() {
   int n;
   cin >> n;
   string s;
   cin >> s;
   string r = "RR";
   string l = "LL";
   int f = 0;
   for (int i = 0; i <= n - 2; i++)
   {
      if (s.substr(i, 2) == r || s.substr(i, 2) == l)
         f = 1;
   }
   if (f == 1)
      cout << "YES" << endl;
   else
      cout << "NO" << endl;
}
//-------------------- Main Function && I/O --------------------
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("error.txt", "w", stderr);
   freopen("output.txt", "w", stdout);
#endif
   int t;
   cin >> t;
   while (t--)
      solve();
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
   return 0;
}
