
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
      int n; cin>>n;
      vector <int> v;
      for (int i=0; i<n;i++)
      {
          cin>>v[i];
      }
      vector <int> odd,even;
      for (int i=0; i<n; i++)
      {
        if (v[i] %2 ==0)
            even.push_back(v[i]);
        else
            odd.push_back(v[i]);
      }

      for(int i=0; i<n; i++)
      {
          cout<<odd[i]<<" "<<even[i];
      }cout<<endl;

      
  }
  return 0;
}