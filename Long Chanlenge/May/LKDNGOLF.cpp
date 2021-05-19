#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll N,x,k;
        cin>>N>>x>>k;
        ll test[N+2],a=0;
        for (ll i=0; i<N+2;i+=k)
        {
            test[a]=i;
            a++;
        }
        ll flag=0;
        for (ll i=0; i<N+2;i++)
        {
            if (x == test[i])
                flag++;
        }
        if (flag ==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}