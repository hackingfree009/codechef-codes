#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define nline "\n"
#define M 1000000007
#define int long long
#define pilus LONG_LONG_MAX
#define minus LONG_LONG_MIN
#define PI 3.141592653589793238462
#define fi(a, b) for (int i = a; i < b; i++)
#define fij(a, b, c, d) fi(a, b) fj(c, d)
#define fj(a, b) for (int j = a; j < b; j++)
#define fauto(a) for (auto au : a)
#define span(a) begin(a), end(a)
#define despan(a) begin(a), end(a), greater<int>()
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef pair<int, int> pii;
typedef unordered_set<int> usi;
typedef set<int> si;
typedef set<string> ss;
typedef multiset<int> msi;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<string, map<int, int>> mapsmii;
/*-----------------------------------------------------------------------*/
int binpow(int a, int b, int mod)
{
    int res = 1;
    while (b != 0)
    {
        if (1 & b)
            res = (res * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return res;
}
int mminvprime(int a, int b) { return binpow(a, b - 2, b); }
int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
int mod_div(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}
int combination(int n, int r, int m, int *fact)
{
    int val1 = fact[n];
    int val2 = mod_mul(fact[n - r], fact[r], m);
    return mod_mul(val1, binpow(val2, m - 2, m), m);
}
/*---------------------------------------------------------------------*/
//Hint is present in constraints
//Hint is present in some matematical expression
//There is some pattern present in answer Find that!
//Clarity before implementing anything
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int pre = 0;
    fi(0, n - 1)
    {
        int r = 0;
        if (s[i] == 'L' && s[i + 1] == 'L')
        {
            cout << "YES";
            return;
        }
        if (s[i] == 'R' && s[i + 1] == 'R')
        {
            cout << "YES";
            return;
        }
    }
    cout << "no";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cout.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
        cout << nline;
    }
    return 0;
}
