#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define openfile freopen("laisuat.inp","r",stdin) , freopen("laisuat.out","w",stdout);
dnh {
    openfile
    long long n,t,l;
    long double s;
    cin>>n>>t>>l;
    s=n;
    for (int i = 0; i < t; i++)
    {
        s+=s*l / 1200;
    }
    cout<<setprecision(3)<<fixed<<s<<endl;
}
