#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        long long int  N,X,test;
        cin>>N>>X;
        pair<int, int> p[N];
        for (int i=0; i<N; i++)
        {
            cin>>p[i].second>>p[i].first;
        }
        sort(p,p+N);
        for (int i=N-1; i>=0;i--)
        {
            if (p[i].second <= X)
            {
                cout<<p[i].first<<endl;
                break;
            }
        }
    }
}