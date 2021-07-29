#include <bits/stdc++.h>
#define ll long long int;
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        if (s[0] == '1')
        {
            cout << s[0];
            cout << "0";
            for (int i = 1; i < s.size(); i++)
            {
                cout << s[i];
            }
        }
        else
        {
            cout << "1";
            for (int i = 0; i < s.size(); i++)
            {
                cout << s[i];
            }
        }
        cout << "\n";
    }
}