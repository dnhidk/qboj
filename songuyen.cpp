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
const ll limit=32005;
bool a[limit];
void sangnt()
{
    for (int i = 0; i < limit; i++)
    {
        a[i]=true;
    }
    a[0]=false; a[1]=false;
    for (int i = 2; i <= limit / 2; i++)
    {
        if (a[i]) for (int j = 2; j <= limit / i; j++)
        {
            a[i*j]=false;
        }   
    }
}
dnh {
	//file("SONGUYEN")
	idk
	int n;
	cin>>n;
	sangnt();
	vector<int> result;
	vector<int> result1;
	f0(i,n)
	{
		int x;
		cin>>x;
		if (a[x]) result1.push_back(x); else result.push_back(x);
	}
	sort(result1.begin(), result1.end(), less<int>());
	for (int i:result) cout<<i<<" ";
	cout<<el;
	for (int i:result1) cout<<i<<" ";
	return 0;
}