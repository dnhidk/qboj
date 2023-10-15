#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define file(name) freopen(name".inp","r",stdin) , freopen(name".out","w",stdout);
#define fix(so) cout << fixed << setprecision(so)
#define ll long long
#define el '\n'
#define big __int128
#define f1(i,n) for (int i = 1; i <= (n); i++)
#define f0(i,n) for (int i = 0; i < (n); i++)
dnh {
    //file("XAUKT")
    idk
    string s;
    getline(cin, s);
    while (s.find("  ") != string::npos) s.erase(s.find("  "), 1);
    if (s[0] == ' ') s.erase(0, 1);
    if (s[s.length() - 1] == ' ') s.erase(s.length() - 1, 1);
    int d=1;
    f0(i,s.length()-1)
    if (s[i]==' ')
    {
        d++;
        s[i+1]=toupper(s[i+1]);
    } else s[i+1]=tolower(s[i+1]);
    cout<<s<<el;
    cout<<d;
    return 0;
}
