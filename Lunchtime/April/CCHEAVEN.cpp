#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        int ones=0, zeroes=0;
        cin>>n>>str;
        int f=0;
        for (int i=0; i<n; i++)
        {
            if (str[i] =='0')
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
            if (ones>=zeroes)
            {
                f=1;
                break;
            }
        }
        if (f==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}