#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll w1,w2,x1,x2,m;cin>>w1>>w2>>x1>>x2>>m;
        float x= (float)((w2-w1)/(float)m);
        if(x>=x1 && x<=x2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}