#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        int arr[n];
        const int d[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        for (ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if (n>4)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++) 
            {
                for (int j = 0; j < 2; j++) 
                {
                    cout << d[i][j] * arr[i] << ' ';
                }
                cout <<endl;
	        }
        }
    }
}