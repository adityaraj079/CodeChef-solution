#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if (n == 1 || n ==2)
        {
            cout<<2<<endl;
            continue;
        }
        if (n == 0)
        {
            cout<<1<<endl;
            continue;
        }
        if (n < 0)
            continue;

        cout<<n-1<<endl;
    }
}