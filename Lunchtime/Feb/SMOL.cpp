#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases, N, K, output, test;
	cin>>test_cases;
	for (int i=0; i<test_cases; i++)
	{
		cin>>N>>K;
		if (N < K)
			cout<<N<<endl;
		else if (N == K)
			cout<<0<<endl;
		else if (N > K)
		{
			for (int j=0; j<N; j++)
			{
				output=N-K;
				N= output;
				if (output < K)
					break;
			}
			cout<<output<<endl;
		}
	}
	return 0;
}
