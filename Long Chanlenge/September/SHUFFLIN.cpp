#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll N;
        cin>>N;
        vector <int> A;
        for(int i=0;i<N;i++)
        {
            int temp; cin>>temp;
            A.push_back(temp);
        }
        int test=0, out=0,hel;
        while(N--)
        {
            random_shuffle(A.begin(),A.end());
            for (int i=0; i<N;i++)
            {
                test+=(A[i]+i)%2;
            }
            
            if (out<test)
            {
                out=test;
                test=0;
            }
        }
        cout<<out<<endl;
    }
}