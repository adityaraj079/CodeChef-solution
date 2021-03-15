#include <bits/stdc++.h> 
using namespace std;

int main()
{
	long int test_cases;
	cin>>test_cases;
	while (test_cases--)
	{
		long long int N;
		double check, a=0;
		cin>>N;
		long long int input_arr[N];
		for (int i=0; i<N; i++)
		{
			cin>>input_arr[i];
		}
		for (int i=0; i<N; i++)
		{
			for (int j=0; j<N; j++)
			{
				check = j-i/input_arr[j]-input_arr[i];
				if (check > a)
				{
					a = check;	
				}
			}
		}
		cout<<a+1<<endl;
	}
}
