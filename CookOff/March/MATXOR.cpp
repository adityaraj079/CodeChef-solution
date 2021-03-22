
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while (t--)
    {
        long long int N,M,K;
        int xor_arr = 0;
        cin>>N>>M>>K;
        long long int mat[N][M];
        for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
            {
                mat[i][j] = K+i+1+j+1;
            }
        }
        for (int i=0; i<N;i++)
        {
            for (int j=0; j<M; j++)
            {
                xor_arr = xor_arr ^ mat[i][j];
            }
        }
        cout<<xor_arr<<endl;
    }
}

//Time Limit is excceded