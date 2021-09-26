#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll out=0;
        for (int i=0; i<s.length()-1; i++)
        {
            if (s[i] != s[i+1])
                out++;
        }
        if (s[0] == '0')
            out++;
        cout<<out<<endl;
    }
}