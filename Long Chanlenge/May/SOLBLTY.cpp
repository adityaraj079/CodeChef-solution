#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,A,B;
        cin>>X>>A>>B;
        int out = A+(100-X)*B;
        cout<<out*10<<endl;
    }
}