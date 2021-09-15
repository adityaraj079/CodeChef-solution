#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll N,S;
      cin>>N>>S;
      ll ans = (N * (N+1)) /2;
      ans = ans - S;
      if (ans>=1 && ans<=N)
        cout<<ans<<endl;
      else  cout<<-1<<endl;
    }
}