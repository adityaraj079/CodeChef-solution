#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector <int> v;
        for (int i=0; i<n; i++)
        {
            int temp; cin>>temp;
            v.push_back(temp);
        }
        if (v[0]!= 1 || v[n-1]!=1)
        {
            cout<<"no"<<endl;
            continue;
        }

        else
        {
            int center = n/2;
            vector <int> start_v;
            vector <int> end_v;
            for (int i=0; i<center; i++)
            {
                int temp = v[i]; 
                start_v.push_back(temp);
            }
            for (int i=center+1; i<n; i++)
            {
                int temp=v[i];
                end_v.push_back(temp);
            }
            int len = max(start_v.size(), end_v.size());
            int flag=0;
            for (int i=0; i<len; i++)
            {
                if (abs(start_v[i] - start_v[i+1]) == 1)
                    flag++;
            }
            if (flag == len)
                cout<<"yes"<<endl;
           
        }
        
    }
}