#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll a,b, test=0;
        cin>>a>>b;
        int tet=10;
        while (tet--)
        {
            test += a;
            if (test % b == 0)
                test = test/b;
            if (test == 1 )
                break;
        }

        if (test == 1)
            {
                cout<<"YES"<<endl;
                
            }
        else
        {
                cout<<"NO"<<endl;
                
            }
        

        
    }
}