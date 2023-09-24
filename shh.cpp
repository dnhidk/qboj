#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define open(name) freopen(name".inp","r",stdin) , freopen(name".out","w",stdout);
#define ll long long
dnh {
    ll n;
    cin>>n;
    bool kt=false;
    ll a[6]={6, 28, 496, 8128, 33550336, 8589869056};
    for (int i = 0; i < 6; i++)
    {
        if (a[i]==n) 
        {
            return cout<<"YES", 0;
        }
    }
    cout<<"NO", 0;
    return 0;
}