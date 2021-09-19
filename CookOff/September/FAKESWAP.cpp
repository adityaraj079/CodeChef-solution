#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int N; cin>>N;
        string S; cin>>S;
        string P; cin>>P;
        bool is_same=true;
        for (int i=0; i<N;i++)
        {
            if(S[i] != P[i])
            {
                is_same=false;
                break;
            }
        }
        if (is_same)
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll cc0=0, cc1=0;
        for (int i=0; i<P.length(); i++)
        {
            if(P[i]=='1')
                cc1++;
            else
                cc0++;
        }
        
    }
}