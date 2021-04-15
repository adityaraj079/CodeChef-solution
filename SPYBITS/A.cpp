#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int H,x,y,C;
        cin>>H>>x>>y>>C;
        int consuption = x+(y/2);
        int Total_con = H*consuption;
        if (Total_con <= C)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

//SAVWATER