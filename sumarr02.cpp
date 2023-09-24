#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define open(name) freopen(name".inp","r",stdin) , freopen(name".out","w",stdout);
#define ll long long
ll bt(ll k)
{
    ll s;
    s=0;
    while (k!=0)
    {
        s+=k%10;
        k/=10;
    }
    return s;
}
dnh {
    ll t,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cout<<bt(n)<<endl;
    }
    return 0;
}