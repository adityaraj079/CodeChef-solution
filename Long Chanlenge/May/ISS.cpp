#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int k;
        cin>>k;
        long long int i=(2*k)+1;
        long long int out_arr[i],out=0;
        for (int j=1; j<=i; j++)
        {
            out_arr[j] = k+pow(j,2);
        }
        for (int j=1; j<i; j++)
        {
            out += __gcd(out_arr[j], out_arr[j+1]);
            // cout<<out_arr[j]<<" ";
        }
        // cout<<endl;
        cout<<out<<endl;
    }
}