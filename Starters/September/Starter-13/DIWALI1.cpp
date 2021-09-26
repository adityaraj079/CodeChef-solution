#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll P,a,b,c,x,y;
        cin>>P>>a>>b>>c>>x>>y;
        ll anar = x* a +b;
        ll chakri = y * a + c;
        ll test=0;
        if (anar < chakri)
            test = anar;
        else
            test = chakri;
            
        cout<<P/test<<endl;
    }
}