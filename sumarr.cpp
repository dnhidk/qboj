#include <bits/stdc++.h>
using namespace std;
vector <int> a(100000);
vector <int> b(100000);
int n,x;
int main() {
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        b[i]=b[i]+a[i]+x;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0; 
}