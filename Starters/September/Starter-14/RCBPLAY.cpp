#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        if ((z*2) + x >= y )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}