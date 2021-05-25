#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];

        map<int,int>mp;
        int res=0;

        for(int i=0;i<k;i++)
        {
            int cnt=1;
            mp[v[i]]++;
            int j=i+k;
            while(j<n)
            {
                mp[v[j]]++;
                 cnt++;
                 j+=k;
            }
            int ma=0;
            map<int,int>::iterator it;
            for(it=mp.begin();it!=mp.end();it++)
            {
                ma=max(ma,it->second);
            }
            mp.clear();
            res+=(cnt-ma);
        }
        cout<<res<<endl;
    }
}