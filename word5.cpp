#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sp ' '
dnh {
    idk
    string s;
    getline(cin, s);
    s+=" ";
    int d=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != sp) d++;
        else 
        {
            if (d != 0) cout<<d<<sp;
            d=0;
        }
    }
    return 0;
}