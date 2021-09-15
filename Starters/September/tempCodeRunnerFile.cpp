#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int N; cin>>N;
        if(N==2)
        {
            cout<<"-1 -1"<<endl;
            cout<<"-1 -1"<<endl;
        }
        else 
        {
            for(int i=0; i<N; i++)
            {
                for(int j=0; j<N;j++)
                {
                    if(i==j)
                        cout<<"-1 ";
                    else
                        cout<<"1 ";
                }cout<<endl;
            }
        }
    }
}