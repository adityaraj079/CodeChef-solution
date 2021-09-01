#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin>>T;
    while(T--)
    {
        int N,test=0;
        cin>>N;
        map<long long ,int> m;
        for (int i=0; i<N;i++)
        {
            long long a;
            cin>>a;
            m[a]++;
            test=max(test,m[a]);
        }
        int out=0;
        if(N>2)
        {
            if (test==1)
                out=N-2;
            else
                out=N-test;
        }
        
    }

    return 0;
}
