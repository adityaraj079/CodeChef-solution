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
        vector <int> even;
        vector <int> odd;
        for (int i=1; i<100; i++)
        {
            if (i%2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }
        vector <int> test;
        for (int i=0; i<n; i++)
        {
            if (v[i] %2 == 0)
                test.push_back(odd[i]);
            else
                test.push_back(even[i]);
        }
        for (int i=0; i<n; i++)
        {
            cout<<test[i]<<" ";
        }cout<<endl;
    }
}