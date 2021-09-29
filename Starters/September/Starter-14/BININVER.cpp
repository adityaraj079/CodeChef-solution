#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int rou(ll a)
{
    ll test=0;
    test = a/2;
    return round(test);
}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        ll cnt = 1e9;
        for(auto elem : arr){
            ll curr = 0;
            while(elem%2==0){
                elem/=2;
                curr++;
            }
            cnt = min(cnt,curr);
        }
        cout<<cnt<<endl;
        
    }
}