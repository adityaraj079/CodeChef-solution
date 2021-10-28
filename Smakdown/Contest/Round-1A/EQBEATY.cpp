#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll N; cin>>N;
        vector <ll> v;
        for (int i=0; i<N; i++)
        {
            ll temp; cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        ll first,last;
        if (N==0 || N==1 || N==2)
            cout<<0<<endl;

        else if (N==3)
            cout<<v[2]-v[1]<<endl;
        else
        {
            first = v[1]-v[0];
            last = v[N-1]-v[N-2];
            cout<<abs(last-first)<<endl;
        }
    }
}