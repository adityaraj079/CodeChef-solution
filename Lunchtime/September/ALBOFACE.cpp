#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 

int win(int n)
{
    if (n==0)
        return 0;
    if (n%2 != 0)
        return !win(n-1);
    if (n%4 != 0)
        return !win(n/2LL);

    return 1;

}

int main() 
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if (win(n))
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    } 
}