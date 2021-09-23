#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int test = pow(10,n+1);
        for (int i=pow(10,(n-1)); i<test; i++)
        {
            if (i%2 != 0)
            {
                if (i%3==0 && i%9!=0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}