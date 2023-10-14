#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define file(name) freopen(name".inp","r",stdin) , freopen(name".out","w",stdout);
#define fix(so) setprecision(so)<<fixed
#define ll long long
#define el '\n'
#define big __int128
#define f1(i,n) for (int i=1;i<=(n);i++)
#define f0(i,n) for (int i=0;i<(n);i++)
const ll limit=1e15;
int t;
ll k;
vector<ll> check;
bool snt(ll k)
{
    if (k<2) return 0;
    for (ll i=2;i<=sqrt(k);i++)
        if (k%i==0) return 0;
    return 1;
}
int cs(ll n)
{
    int s=0;
    while (n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
void prime()
{
    for (ll i=2;i<=limit;i++)
    {
        if (snt(cs(i))) check.push_back(i);
    }
}
dnh {
    //file("dnh")
    idk
    cin>>t;
    prime();
    while (t--)
    {
        cin>>k;
        cout<<check[k-1]<<el;
    }
    return 0;
}