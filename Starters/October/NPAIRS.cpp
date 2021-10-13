#include <bits/stdc++.h>
#define ll long long int
#define ss second
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string S; cin>>S;
        int temp=0;
        map <ll, ll> a;
        map <ll, ll> b;
        for (int i=0; i<n; i++)
        {
            a[i - (S[i] - 48)]++;
            b[i + (S[i] - 48)]++;
        }
        for (auto itr = a.begin(); itr !=a.end(); itr++)
        {
            temp += ((itr->ss) * (itr->ss - 1)) /2;
        }
        for (auto itr = b.begin(); itr !=b.end(); itr++)
        {
            temp += ((itr->ss) * (itr->ss - 1)) /2;
        }
        cout<<temp<<endl;
    }
}