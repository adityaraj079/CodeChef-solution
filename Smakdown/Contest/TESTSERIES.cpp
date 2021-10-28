#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int draw=0, ones=0, twos=0;
        vector <int> v;
        for (int i=0; i<5; i++)
        {
            int temp; cin>>temp;
            v.push_back(temp);
            if (temp == 0)
                draw++;
            else if (temp == 1)
                ones++;
            else if (temp == 2)
                twos++;
        }
        if (ones > twos)
            cout<<"INDIA"<<endl;
        else if (twos > ones)
            cout<<"ENGLAND"<<endl;
        else
            cout<<"DRAW"<<endl;
    }
}