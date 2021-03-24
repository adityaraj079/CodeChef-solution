
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll N,M,K;
        ll output = 0;
        cin>>N>>M>>K;
        for (ll i=1; i<=N; i++)
        {
            if (min(i,M)%2 == 1)
                output ^= K+i+1;
        }
        // Last row
        for (ll j=2; j<=M; j++)
        {
            if (min(N,M-j+1) %2 == 1)
                output ^= K+N+j;
        }
        cout<<output<<endl;
    }
}
