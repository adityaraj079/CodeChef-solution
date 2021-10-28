#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll X,K;
        cin>>X>>K; 
        ll min,max; 
        if(X*2<=X*K)
        { 
            min=X*2; 
        } 
        else if(X%2!=0)
            min=X*(X+1); 
        else
        { 
            min=X*(X+2); 
        } 
        max=(X*K*(X*K-1)); 
        cout<<min<<" "<<max<<endl; 
    }
}