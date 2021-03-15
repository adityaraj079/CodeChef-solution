#include <iostream>
using namespace std;

int main()
{
	long long int test_cases;
	cin>>test_cases;
	while (test_cases--)
	{
		long double num, factorial, output;
		cin>>num;
		for (int j=num; j>0; j--)
		{
			factorial *= j;
		}
		cout<<"Factorial is "<<factorial<<endl;
		while (factorial--)
		{
			if (factorial % 10 == 0)
				output++;
				
			factorial /= 10;
		}
		cout<<output<<endl;
	}
}
