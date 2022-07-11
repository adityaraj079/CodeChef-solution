#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int temp=0;
        vector<int> classes;
            for(int i=0; i<n; i++)
            {
                int inp; cin>>inp;
                classes.push_back(inp);
            }
        if (n < 12)
        {
            cout<<"no"<<endl;
            continue;

        }
        else
        {
            sort(classes.begin(), classes.end());
            for(int i=0; i<n; i++)
            {
                temp=0;
                for(int j=0; j<n; j++)
                {
                    if(classes[i] != classes[j])
                        temp++;
                }
            }
            if(temp >= 12)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        

    }
}