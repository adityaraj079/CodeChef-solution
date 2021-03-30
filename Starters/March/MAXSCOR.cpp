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
    int T;
    cin>>T;
    while(T--)
    {
        ll N,K, flag=1,output=0;
        cin>>N>>K;
        ll M[N],T[N];
        rep(i,N)
        {
            cin>>M[i]>>T[i];
        }
        rep(i,N)
        {
            if (T[i] < K)
            {
                output += M[i];
                K -= T[i];
            }
        }
        output -= M[0];
        cout<<output<<endl;
    }
}