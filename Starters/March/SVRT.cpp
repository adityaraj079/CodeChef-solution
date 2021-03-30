#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while (t--)
	{
	    long long int n,k,d=0;
	    cin>>n>>k;
	    if (n%k==0)
	        cout<<n/k<<" "<<k<<endl;
	    else
	        cout<<(n/k)+1<<" "<<n%k<<endl;
	}
	return 0;
}
