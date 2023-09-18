#include <bits/stdc++.h>
using namespace std;
string mahoa(string s, int k)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
            if (s[i]+k > 'z') s[i]=s[i]+k -26;
            else s[i]=s[i]+k;
        }
        else
        {
            if (s[i]+k > 'Z') s[i]=s[i]+k-26;
            else s[i]=s[i]+k;
        }
        }
    }
    return s;
}
int main() {
    string s;
    getline(cin, s);
    int k;
    cin>>k;
    cout<<mahoa(s, k);
    return 0;
}