#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int A,B,P,Q;
        cin>>A>>B>>P>>Q;
        int s= abs(A-P)+abs(B-Q);
        if (s)
        {
            if (s%2 == 0)
                cout<<2<<endl;
            else    cout<<1<<endl;
        }
        else    cout<<0<<endl;
    }
}