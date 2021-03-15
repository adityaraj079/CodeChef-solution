#include <iostream>
using namespace std;

int main()
{
	int test_cases;
	cin>>test_cases;
	while (test_cases--)
	{
		int budget[test_cases];
		for (int i=0; i<test_cases; i++)
		{
			cin>>budget[i];
		}
		for (int i=0; i<test_cases; i++)
		{
			cout<<budget[i];
		}
	}
}
