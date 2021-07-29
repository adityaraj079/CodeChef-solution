#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll X,Y;
        cin>>X>>Y;
        if (__gcd(X,Y) > 1)
        {
            cout<<0<<endl;
        }
        else if (__gcd(X+1,Y) > 1 || __gcd(X,Y+1) > 1)
        {
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
        
        
    }
}