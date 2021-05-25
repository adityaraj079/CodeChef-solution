#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define MAXno 10000009
#define mod 1000000007
using namespace std;
 
void SyncOff()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
}

void solve()
{
    int t;
    cin>>t;
    for(;t--;)
    {
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        int n=0;

            for (int i = 0; i < x ; ++i)
            {
                n+=(i+1);
            }

            // cout<<n<<"  ";

            for (int i = 0; i < y-1; ++i)
            {
                n+=(x+i);
            }

            // cout<<n<<"  ";

            int sum=n;
            int diff=(x+y);
            for (int i = 0; i < (x1-x); ++i)
            {

                n+=(diff+i);
                sum+=(n);
            }

            // cout<<sum<<"  ";

            // cout<<n<<" ";

            diff=(x1+y-1);
            for (int i = 0; i < (y1-y); ++i)
            {
                n += (diff+i);
                sum += n;
            }
            // cout<<n<<"  ";
            cout<<sum<<endl;
    }

}
 
int main()
{
    SyncOff();
    solve();
    return 0;
}