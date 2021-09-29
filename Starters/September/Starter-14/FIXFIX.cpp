#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,k; cin>>n>>k;
    if(k==n-1){
        cout<<"-1"<<endl;
        return;
    }

    vector<ll> arr(n,0);
    for(int i=0;i<n;i++) 
        arr[i]=(i+1);
    for(int i=0;i<n-k-1;i++) 
        arr[i]=(i+2);
    if(n-k-1>=0) 
        arr[n-k-1]=1;
    for(auto elem : arr) 
        cout<<elem<<" ";
    cout<<endl;
}

int main()
{
    ll t; cin>>t;
    while(t--) solve();
}