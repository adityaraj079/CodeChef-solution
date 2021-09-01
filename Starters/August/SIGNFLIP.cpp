#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #define Mod 1000000007
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define mod 3e5
#define ar array
#define mp make_pair;
// #define rep(i, a, b) for (int i=a; i<b; i++)
// ll gcd(ll a,ll b){while(a&&b)a>b?a%=b:b%=a;return a+b;}
// ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
// // ll power(ll b, ll e){   ll p = 1;  while(e>0){ if(e&1){  p = (p*b)%mod; }
// //     e = e>>1;  b = (b*b)%mod;} return p;  }
// Modular Exponentiation (Power in Modular Arithmetic)
ll power(ll x, ll y)
{     
    // Initialize answer
    ll res = 1;     
    // Check till the number becomes zero
    while (y)
    {         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
        // y = y/2
        y = y >> 1;
        // Change x to x^2
        x = (x * x);
    }
    return res;
}
 
//function to count the digit 
int digitCount(ll n)
{
  int count = 0;
  while(n)
  {
    count++;
    n = n/10;
  }
  return count;
}
// function to check prime number
ll is_prime(ll n) {
  for(ll i=2; i*i <= n; i++)
  {
    if(n%i == 0)
      return false;
  }
  return true;
}
 
//pair<int,int> a[100001];
 
// void solve() {
//  int n,k;
// cin >> n >> k;
// for (int i=1;i<=n;i++)
// {
// cin >> a[i].first;
// a[i].second=i;
// }
// int cnt=1;
// sort(a+1,a+n+1);
 
// for (int i=1;i<=n-1;i++) if(a[i].second!=a[i+1].second-1) cnt++;
// if(cnt>k) cout << "NO" <<endl;
// else cout << "YES" <<endl;
// }
 
long long int lastDigit(ll n)
{
 
    return (n % 10);
}
void solve() {
  ll n,k;
  cin>>n>>k;
 
  vector<ll> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
 
  for (int i = 0; i < k; ++i)
  {
    if(a[i] < 0)
    {
      a[i]*=-1;
    }
 
  }
  ll sum=0;
  for (int i = 0; i < n; ++i)
  {
    if(a[i]>0)
    {
      sum+=a[i];
    }
  }
 
  cout<<sum<<endl;
}
 
int main() 
{
 
   FastIO;
  // #ifndef Online_Judge
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w",stdout);
  // #endif
 
  ll t=1;
  cin>>t;
 
  while(t--)
  {
      solve();
  }
  return 0;
}