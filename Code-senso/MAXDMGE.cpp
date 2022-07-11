#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll N; cin>>N;
        vector <ll> v,testing;
        for(int i=0; i<N; i++)
        {
            ll temp; cin>>temp;
            v.push_back(temp);
        }
        ll test;
        for(int i=0; i<N; i++)
        {
            ll temp = v[i];
            for (int j=0; j<N-1; j++)
            {
                if (v[j] >= temp)
                {
                    testing.push_back(v[j]);
                }
            }
            for (int j=0; j<testing.size(); j++)
            {
                cout<<testing[j]<<" ";
                test &= testing[j];
            }
            cout<<test<<" ";
        }
    }
}