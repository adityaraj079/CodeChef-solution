#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y,xr,yr,D;
        cin>>x>>y>>xr>>yr>>D;
        int food_supply = x/xr;
        int water_supply = y/yr;
        if (min(food_supply,water_supply) >= D)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}