#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve()
{
    ll N,K;
        cin>>N>>K;
        vector <int> v;
        for(int i=0; i<N; i++)
        {
            ll temp; cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        
        
            if(v[0] + v[N-1] <= K || N == 1)
                return true;
        
        return false;
}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        if (solve())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}