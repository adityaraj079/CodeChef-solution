#include <iostream>
using namespace std;

int main()
{
	int N,H,x,output;
	int test=0;
	cin>>N>>H>>x;
	int timezone_arr[N];
	for (int i=0; i<N; i++)
	{
		cin>>timezone_arr[i];
	}
	for (int i=0 ;i<N; i++)
	{
		if (x+timezone_arr[i] >= H)
			test++;
	}
	if (test == 1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}
