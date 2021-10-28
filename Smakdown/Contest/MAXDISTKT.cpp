#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector <int> v;
        for(int i=0; i<n ;i++)
        {
            int temp; cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int br=0;
        for (int i=0; i<v.size(); i++)
        {
            if (v[i]!= v[0])
            {
                br=1;
                break;
            }

        }
        if (!br)
            cout<<-1<<endl;
        ll ntu =0;
        for (int i=1; i<v.size(); i++)
        {
            ll df = v[i]-v[0];
            ntu = __gcd(df,ntu);
        }
        cout<<ntu<<endl;
    }
}