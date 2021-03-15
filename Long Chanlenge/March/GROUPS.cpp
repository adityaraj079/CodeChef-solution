#include <iostream>
using namespace std;

int main()
{
	int test_cases, output_num=0;
	cin>>test_cases;
	while (test_cases--)
	{
		string input_string;
		cin>>input_string;
		output_num=0;
		int len = input_string.length();
		for (int i=0; i<len; i++)
		{
			if (input_string[i] == '1')
				output_num++;
			if (input_string[i] == '1' & input_string[i-1] == '1')
				output_num--;
		}
		cout<<output_num<<endl;
	}
}
