#include <bits/stdc++.h>
using namespace std; 

int main() {
    int T;
    cin>>T;
    while(T--)
    {
     int a,b,c,d,k;
     cin>>a>>b>>c>>d>>k;
     int step=abs(c-a)+abs(d-b); 
    if(k==step)
    {
    cout<<"YES";  
    } 
    else if(step>k)
        cout<<"NO";
    else if((k-step)%2&&k>step)
        cout<<"NO";
    else if((k-step)%2==0&&k>step)
     cout<<"YES";
     cout<<"\n";
    }
    return 0;
    }