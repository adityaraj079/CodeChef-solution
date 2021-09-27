#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 

int main() 
{ 
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;
        int temp = (n*(n+1))/2;
        if ( n %4 != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int q1=n/4, q2 = 2*n/4, q3 = 3*n/4, q4=n;
            for (int i=1;i<=q1; i++)
            {
                cout<<i<<" ";
            }
            for (int i=q3+1; i<=q4; i++)
            {
                cout<<i<<" ";
            }cout<<endl;

            for (int i=q1+1;i<=q3; i++)
            {
                cout<<i<<" ";
            }cout<<endl;
            

        }
    }
 
} 