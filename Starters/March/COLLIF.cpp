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
    while (T--)
    {
        ll N,M, flag=1, count=0,temp;
        cin>>N>>M;
        map<ll, ll> m1;
        vector<ll> v;
        ll foot[N], crick[M];
        rep(i,N)
        {
            cin>>temp;
            m1[temp]++;
            v.push_back(temp);
        }
        rep(i,M)
        {
            cin>>temp;
            m1[temp] = 0;
            v.push_back(temp);   
        }
        sort(v.begin(), v.end());
        for (auto i : v)
        {
            if (m1[i] != flag)
            {
                if (flag == 1)
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                }
                count++;
            }
        }
        cout<<count<<endl;


    }
}