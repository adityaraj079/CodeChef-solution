#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
 // your code goes here
 ll t; cin>>t;
 while(t--)
 {
     ll n; cin>>n;
     int a;
     for(int i=0;i<n-1;i++) 
     {
        cin>>a;
     }
     //int temp=*max_element(a,a+n-1);
     ll ans=((pow(10,5)-a)+(pow(10,5)-a+1));
     cout<<ans%1000000007<<endl;
 }
 return 0;
}