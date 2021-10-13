#include <bits/stdc++.h>
#define ll long long int
#define ss second
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
     {
        int n,a,b;
        cin>>n>>a>>b;
        int x;
        ll scorea=0,scoreb=0;
        ll pow2=0;
        while(n%2==0 && n>1){
            n/=2;
            pow2++;
            scorea+=a;
        }
        if(a<0 && pow2>0){
           scorea=a;
        }
        ll pow_odd=0;
        for(int i=3;i<=sqrt(n) && n>1;i+=2)
        {
            while(n%i==0){
                n/=i;
                pow_odd++;
                scoreb+=b;
            }
        }
        if(b<0 && pow_odd>0){
            scoreb=b;
        }
        if(n>2)scoreb=b;
        cout<<scorea+scoreb<<endl;
    }
}
