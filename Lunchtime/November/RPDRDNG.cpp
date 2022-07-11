#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
void solve() {
    ll n; 
    cin>>n;
    vector<ll> v,ans;
    ll x;
    map<ll,ll> mp,ch;
    for(ll i=0; i < 2*n; i++)
    {
        cin>>x;
        v.pb(x);
        if(mp[x]==0) ans.pb(x);
        mp[x]++;
    }
    sort(ans.begin(),ans.end());
    ll k=0;
    ch[ans[0]]++;
    for (ll i = 1; i < ans.size(); i++)
    {
        ll temp = ceil((i+1)/2.0);
        ch[ans[temp-1]]++;
    }
    k = ans.size()-1; ch[ans[k]]++;

    for (ll i = k-1; i >= 0; i--)
    {
        ll temp;
        temp = i+ceil((k-i+1)/2.0);
        ch[ans[temp-1]]++;
    }
    
    for (auto i = mp.begin(),j=ch.begin(); i != mp.end(); i++,j++)
    {
        if(*i!=*j)
        {
            cout << "-1\n";
            return;
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << ' ';
    }cout<<endl;
    
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}