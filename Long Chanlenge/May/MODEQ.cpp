#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll MOD(int a, int b)
{
    return a%b;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
        cin>>N>>M;
        int out=0;
        vector<int> modular_eq(N+1, 1);
        for (int i=2; i<=N;i++)
        {
            int x=M%i;
            out += modular_eq[x];
            for (int j=x; j<=N;j+=i)
            {
                modular_eq[j]++;
            }
        }
        cout<<out<<endl;
    }
    return 0;
}