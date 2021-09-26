#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll L,R,out=0,sum=0;
        cin>>L>>R;
        ll M=3;
        if(L%M==0)
        cout<<(R/M) - (L/M) +1<<endl;
        else
            cout<<(R/M) - (L/M)<<endl;


    }

}