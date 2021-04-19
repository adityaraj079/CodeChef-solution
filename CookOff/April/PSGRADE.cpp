#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int Amin, Bmin, Cmin, Tmin, A,B,C;
        cin>>Amin>>Bmin>>Cmin>>Tmin>>A>>B>>C;
        if (A>=Amin && B>=Bmin && C>=Cmin && A+B+C>=Tmin)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}