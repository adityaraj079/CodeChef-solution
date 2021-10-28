#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll X,Y, steps=0;
        cin>>X>>Y;
        while(X!=Y)
        {
            if (X<Y)
            {
                X += 2;
                steps++;
            }
            else
            {
                X -= 1;
                steps++;
            }
        }
        cout<<steps<<endl;
    }
}