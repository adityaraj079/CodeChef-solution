#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string n;
        ll k; cin>>n>>k;
        sort(n.begin(), n.end());
        ll st = 1;
        while(k>=1&&n[0]!='9') {
            for(int i=0;i<n.size();i++) {
                if(k<1)
                break;
                if(n[i]=='9')
                break;
                while(n[i]<(st+'0')&&k>=1) {
                    n[i] = n[i] + 1;
                    k-=1;
                }
            }
            st++;
        }
        ll ans = 1;
        for(int i=0;i<n.size();i++) {
            ans*=(n[i]-'0');
        }
        cout<<ans<<"\n";
    }
}