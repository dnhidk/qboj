#include <bits/stdc++.h>
using namespace std;
#define dnh int main()
#define idk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
dnh {
	idk
	string s;
	getline(cin, s);
	s+=" ";
	int i,max1=0,d=0;
	for (i=0; i < s.length(); i++)
	{
		if (s[i] != ' ') 
		{
			d++;
		}
		else 
		{
			max1= max(d,max1);
			d=0;
		}
	}
	cout<<max1;
	return 0;
}
