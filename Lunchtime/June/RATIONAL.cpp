#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


int main(){
    FAST1;
    FAST2;
    ll t=1;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        while(b%2==0)
            b/=2;
        if(b==1)
            cout<<"Yes \n";
        else
            cout<<"No \n";
    }
}