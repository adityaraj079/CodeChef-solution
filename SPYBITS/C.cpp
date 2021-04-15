#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin>>N;
    long long int city[N],output=0,a=1;
    for (long long int i=0; i<N; i++)
    {
        cin>>city[i];
    }
    long long int Q;
    cin>>Q;
    while (Q--)
    {
        long long int X,K;
        cin>>X>>K;
        for (long long int j=X; j<N; j++)
        {
            K=K-city[j];
            output = output+a;
            a++;
        }
        cout<<output<<endl;
    }
}

//GOTHAM