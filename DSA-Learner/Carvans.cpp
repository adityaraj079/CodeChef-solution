#include <iostream>
using namespace std;

int main()
{
	int test_cases;
	cin>>test_cases;
	for (int i=0; i<test_cases; i++)
	{
		int num_cars;
		cin>>num_cars;
		int a, c=1;
		cin>>a;
		for (int j=0; j<num_cars-1; j++)
		{
			int b;
			cin>>b;
			if (b<=a)
			{
				a=b;
				c++;
			}
		}
		cout<<c<<endl;
	}
}
