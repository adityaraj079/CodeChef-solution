#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string decimalToBinary(int n)
{
    string s = bitset<64>(n).to_string();
    const auto loc1 = s.find('1');
    if (loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

int main()
{
    
    ll T;
    cin >> T;
    while (T--)
    {
        vector<ll> bits(33, 0);
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            string s = decimalToBinary(a[i]);
            ll pos = 0;
            for (ll i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] == '1')
                    bits[pos]++;
                pos++;
            }
        }
        ll k = ceil(n / (double)2);
        string s = "";
        for (ll i = 32; i >= 0; i--)
        {
            if (bits[i] >= k)
                s += "1";
            else
                s += "0";
        }
        ll x = binaryToDecimal(s);
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            a[i] = a[i] ^ x;
            ans |= a[i];
        }
        cout << x << " " << ans << endl;
    }
}