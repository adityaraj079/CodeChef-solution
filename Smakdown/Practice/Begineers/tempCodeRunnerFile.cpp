#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll N,K;
        cin>>N>>K;
        vector <int> v;
        for (int i=0; i<N; i++)
        {
            int temp; cin>>temp;
            v.push_back(temp);
        }
        //int check = v[K];
        sort(v.begin(), v.end(),  greater<int>());
        int check = v[K-1];
        int out=0;
        for (int i=0; i<N; i++)
        {
            if (v[i] >= check)
                out++;
        }
        cout<<out<<endl;
    }
}