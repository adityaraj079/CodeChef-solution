#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        long long int N;
        cin>>N;
        long long int boys[N],girls[N],test,a=0;
        for (long long int i=0; i<N; i++)
        {
            cin>>boys[i];
        }
        for (long long int i=0; i<N; i++)
        {
            cin>>girls[i];
        }
        sort(boys,boys+N);
        sort(girls,girls+N);
        for (long long int i=0; i<N; i++)
        {
            test = girls[i] + boys[N-1-i];
            if (test > a)
                a=test;
        }
        cout<<a<<endl;
    }
}

//VCOUPLES