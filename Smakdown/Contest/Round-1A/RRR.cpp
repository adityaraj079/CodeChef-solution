#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll K,N;
        cin>>N>>K;
        ll ans = (2*N-K-1)/2;
        cout<<2*ans<<endl;
    }
}