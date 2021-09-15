#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int N,A,B;
        cin>>N>>A>>B;
        string S;
        cin>>S;
        int int_dis=0, int_state=0;
        for (int i=0; i<N;i++)
        {
            if (S[i] == '0')
                int_dis++;
            else
                int_state++;
        }
        int total = (A*int_dis)+(B*int_state);
        cout<<total<<endl;
    }
    return 0;
}