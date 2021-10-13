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
            cout<<1<<endl;
            continue;
        }
        if (n <= 0)
            continue;

        
        n = n/2;
        if (n%2 == 0)
            cout<<n<<endl;
        else    cout<<n+1<<endl;
    }
}