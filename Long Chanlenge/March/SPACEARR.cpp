#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test_cases;
	cin>>test_cases;
	while (test_cases--)
	{
		int N, cnt=0, flag=0;
		cin>>N;
		int input_arr[N];
		for (int i=0; i<N; i++)
		{
			cin>>input_arr[i];
		}
		sort(input_arr, input_arr+N);
		for (int i=0; i<N; i++)
		{
			if (input_arr[i]>i+1)
			{
				cout<<"Second"<<endl;
				flag=1;
				break;
			}
			else
			{
				cnt += i+1-input_arr[i];
			}
		}
		if (flag == 0)
		{
			if (cnt&1)
				cout<<"First"<<endl;
			else
				cout<<"Second"<<endl;
		}
	}
	return 0;
}
