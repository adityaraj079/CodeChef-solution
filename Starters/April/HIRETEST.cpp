#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
        cin>>N>>M;
        int X,Y;
        cin>>X>>Y;
        while (N--)
        {
            string input;
            int P_count=0, F_count=0, U_count=0;
            cin>>input;
                for (int i=0; i<input.length();i++)
                {
                    if (input[i] == 'P')
                    {
                        P_count++;
                    }
                    else if (input[i] == 'F')
                    {
                        F_count++;
                    }
                    // else if (input[i] == 'U')
                    // {
                    //     ++U_count;
                    // }
                }
                if (F_count >= X)
                    cout<<1;
                else if (F_count >= X-1 && P_count >= Y)
                    cout<<1;
                else
                    cout<<0;
        }
        cout<<endl;
    }
}