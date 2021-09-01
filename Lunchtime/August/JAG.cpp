#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int Arr[n];
	    
	    map<int, int> mp;
	    int ans =0 ;
	    
	    for (int i=0;i<n; i++)
	    {
	        cin>>Arr[i];
    	    mp[Arr[i] - i -1 ]++;
    	    
    	    if (mp[Arr[i] -i - 1] == 1)
    	    {
    	        ans++;
    	    }
	    }
	    if (mp[Arr[0] - 1] == n)
	    {
	        cout<<n<<endl;
	    }
	    else
	        cout<<1<<endl;
	    
	}
	
	return 0;
}