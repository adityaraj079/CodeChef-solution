#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i=0; i<n; i++)
#define rep1(i,n) for(ll i=1; i<=n; i++)
#define pb push_back
#define lc lower_bound
#define beg() begin()
#define sp <<":"<<
#define f first
#define s second 
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()

{
    FastIO
    ll T;
    cin>>T;
    while (T--)
    {
        long long int n,m,flag=0,topic;
        cin>>n>>m;
        long long int taken[m];
        memset( taken,0,sizeof(taken));
        rep(i,n)
        {
            cin>>topic;
            taken[topic-1] = i+1;
        }
        rep(i,m)
        {
            //cerr<<taken[i]<<endl;
            if(taken[i] == 0)
            {
                flag=1;
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(!flag) cout<<"No"<<endl;
  

    }
}

//Yes yes this code is copied 
//I just wanted to learn new format for code writing