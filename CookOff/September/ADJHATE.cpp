
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
      int n; cin>>n;
      vector <int> odd,even;
      for (int i=0; i<n; i++)
      {
          int temp ; cin>>temp;
        if (temp %2 ==0)
            even.push_back(temp);
        else
            odd.push_back(temp);
      }

      if (odd.empty() || even.empty())
      {
          cout<<-1<<endl;
      }
      else
      {
          
        for(int i=0; i<odd.size(); i++)
        {
            cout<<odd[i]<<" ";
        }
        for(int i=0; i<even.size(); i++)
        {
            cout<<even[i]<<" ";
        }
        cout<<endl;
      }
  }
  return 0;
}