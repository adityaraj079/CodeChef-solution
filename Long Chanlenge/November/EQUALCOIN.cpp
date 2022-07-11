#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if (x+y > 0)
        {
            x = x*1;
            y = y*2;
            if ((x+y)%2 == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}