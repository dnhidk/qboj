#include <bits/stdc++.h>

using namespace std;

#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout);
#define fix(a) fixed << setprecision(a)
#define ll long long
#define el '\n'
#define big __int128
#define f1(i,n) for (int i = 1; i <= (n); i++)
#define f0(i,n) for (int i = 0; i < (n); i++)
#define pb push_back
//----------------------
const int maxn=1e7+1;
//----------------------
dnh {
	file("dnh")
	idk
	ll n;
	cin>>n;
	vector<ll> a(n);
	f0(i,n) cin>>a[i];
	ll s=0,max1=INT_MIN;
	f0(i,n) 
	{
		s=max(a[i], s+a[i]);
		max1=max(max1, s);
	}
	cout<<max1;
	return 0;
}