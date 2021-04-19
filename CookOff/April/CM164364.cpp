#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--)
  {
    int p,k;
    cin>>p>>k;
    int b[p];
    for(int i=0;i<p;i++)
      cin>>b[i];
 
     set<int>x;
     for(int i=0;i<p;i++)
      x.insert(b[i]);
      int y=x.size();
 
      int z=p-k;
      if(y<=z)
       cout<<y<<endl;
       else
       cout<<z<<endl;
 
  }
  return 0;
}

//chocolate Mongar