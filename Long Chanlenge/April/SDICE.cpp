#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i=0; i<n; i++)
#define rep1(i,n) for(ll i=1; i<=n; i++)
#define pb push_back
#define lc lower_bound
#define beg() begin()
#define sp <<":"<<
#define f first
#define s second 
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    FastIO
    ll T;
    cin>>T;
    while(T--)
    {
        ll N, output=0, test_arr[6];
        cin>>N;
        rep1(i,6)
        {
            test_arr[i-1] = i;
        }
        rep1(i,6)
        {
            if (i != N)
                output += i;
        }
        cout<<output;
    }
}