#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
string mahoa(string s, int k)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
            if (s[i]-k < 'z') s[i] =(s[i] -'z'- k) % 26 + 'z';
            else s[i]=s[i]-k;
        }
        else
        {
            if (s[i]-k < 'Z') s[i] = (s[i] -'Z'- k) % 26 + 'Z';
            else s[i]=s[i]-k;
        }
        }
    }
    return s;
}
dnh {
    string s;
    getline(cin, s);
    int k;
    cin>>k;
    cout<<mahoa(s, k);
    return 0;
}