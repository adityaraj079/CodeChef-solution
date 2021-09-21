
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll T; cin>>T;
    while(T--) 
    {
        ll n,k;
        cin>>n>>k;
        string zeb;
        cin>>zeb;
        ll ans=0, alt=0;
        for (int i=1; i<n; i++)
        {
            if(zeb[i] != zeb[i-1])
                alt++;
        }
        if (alt >= k)
        {
            for(int i=n-1; i>=0; i--)
            {
                if (k%2 != 0 && zeb[i]!= zeb[0])
                {
                    cout<<i+1<<endl;
                    break;
                }
                else if (k%2 == 0 && zeb[i]== zeb[0])
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}