#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int N,P,X,Y;
        cin>>N>>P>>X>>Y;
        int inp[N];
        for (int i=0; i<N;i++)
        {
            cin>>inp[i];
        }
        int out=0, time=0;
        for (int i=0; i<P-1; i++)
        {
            
                if (inp[i] == 0)
                    out+=X;
                else if (inp[i] == 1)
                    out+=Y;
            
        }
        cout<<out+Y<<endl;
    }
}