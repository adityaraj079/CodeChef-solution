#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int T;
    cin>>T;
    while(T--)
    {
        long int N,M;
        cin>>N>>M;            // number of grids
        long int x,y;
        cin>>x>>y;           //Cordinates of thief
        long int a,b;
        cin>>a>>b;           //Cordinates of police
        while(N--)
        {
            if (x+1 == N && y==M)
                cout<<"YES"<<endl;
            else if (x==N && y+1==M)
                cout<<"YES"<<endl;
            
        }

    }
}