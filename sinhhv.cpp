#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define open(name) freopen(name".inp","r",stdin) , freopen(name".out","w",stdout);
#define ll long long
#define ci cin
#define co cout
dnh {
    idk
    ll n;
    ci>>n;
    ll a[n];
    for (int i = 0; i < n; i++) 
    {
        a[i]=i+1;
    }
    while (true) 
    {
        for (int i = 0; i < n; i++) 
        {
            co<<a[i];
        }
        co<<endl;
        if (!next_permutation(a, a+n)) 
        {
            break;
        }
    }
    return 0;
}
