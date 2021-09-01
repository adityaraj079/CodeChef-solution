#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a;
		cin>>a;
		int out=a*(a+1)/2;
		if(out%2==0)
			cout<<a<<endl;
		else
			cout<<a-1<<endl;
	}
}