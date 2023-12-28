/*
    Ngu đến hết cứu 
*/
#include <bits/stdc++.h>

#pragma GCC optimize("O2") 
#pragma GCC target("avx,avx2,fma")

using namespace std;

#define dnh int main()
#define Fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define __File(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define fix(a) fixed << setprecision(a)
#define ll long long
#define ull unsigned long long
#define el cout <<'\n'
#define big __int128
#define pb push_back
#define pob pop_back()
#define gcd(a, b) abs(__gcd(a, b))
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define mem(f,x) memset(f, x, sizeof(f))
#define pii pair<int, int> 
#define fi first
#define se second
#define NAME "dnh"
//-----------------------------
const int maxn = 1e7 + 1;
const int mod = 1e9 + 7;
//-----------------------------

int t;
char c[3] = {'b', 'c', 'd'};
bool check(char x) {
    for (int i = 0; i < 3; ++i) 
        if (x == c[i]) return 1;
    return 0;
}
void solve() {
    int n;
    string s;
    cin >> n >> s;
    string res = "";
    for (int i = 0; i < n; ++i) {
        res += s[i];
        if (check(s[i]) && check(s[i + 1])) res += '.';
            else if (!check(s[i]) && (s[i + 2] == 'a' || s[i + 2] == 'e')) res += '.';
    }
    cout << res;
    el;
}
dnh {
    __File(NAME)
    Fast
    cin >> t;
    while(t--) solve();
    cerr <<"Time elapsed: " <<TIME <<"s.\n";
    return 0;
}
