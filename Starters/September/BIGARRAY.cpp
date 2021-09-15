#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, s;
      cin >> n >> s;

      int ans = n * (n + 1) / 2;

      

      ans = ans - s;

      

      if (ans >= 1 and  ans <= n)  cout << ans << endl;

      else cout << -1 << endl;
    }
}