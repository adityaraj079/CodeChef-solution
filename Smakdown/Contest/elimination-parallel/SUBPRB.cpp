#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin >> n;
    int a[n], k = 2, j = 1;
    if(n % 2 != 0 && n != 1)
    {
        for(int i = 0;i < n;i++)
        {
            a[i] = k;
            k += 2;
        }
    }
    else
    {
        for(int i = 0;i < n;i++)
        {
            a[i] = j;
            j += 2;
        }
    }
    
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    } cout << endl;
}

int main() 
{

 int t; cin >> t;
 while(t--)
 {
    solve();
 }
 return 0;
}