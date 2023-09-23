/* 
    Chó Cường với Bảo Huy tham khảo bài thì cúi cúi cái đầu xuống!
    Đời Nhớ Ơn Anh Dnh
*/
#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define open(name) freopen(name".inp","r",stdin) , freopen(name".out","w",stdout);
#define ll long long
dnh {
    open("sieudx")
    ll x, y=0, k=1; 
    cin>>x;
    string s=to_string(x);
    for (int i = 1; i <= s.size()-1; i++)
    {
        k=k*10+1;
    }
    if (x==9*k) {cout<<k+1;}
    else for (int i = 0; i < 9; i++)
    {
        y+=k;
        if (y>x) 
        {
            cout<<y-x;
            break;
        }
        else if (y==x)
        {
            cout<<k;
            break;
        }
    }
}
