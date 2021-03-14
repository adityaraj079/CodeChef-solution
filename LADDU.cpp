#include <iostream>
using namespace std;

int main()
{
	long int test_cases;
	cin>>test_cases;
	while (test_cases--)
	{
		long int activities;
		string origin;
		cin>>activities>>origin;
		int points;
		for (int i=0; i<activities; i++)
		{
			string input;
			cin>>input;
			if (input == "CONTEST_WON")
			{
				int rank;
				cin>>rank;
				if (rank <20)
					points += 300 + (20-rank);
				else
					points += 300;
			}
			else if (input == "TOP_CONTRIBUTOR")
				points += 300;
			else if (input == "BUG_FOUND")
			{
				int severity;
				cin>>severity;
				points += severity;
			}
			else if (input == "CONTEST_HOSTED")
				points += 50;
		}
		if (origin == "INDIAN")
		{
			cout<<points/200<<endl;
			points=0;
		}
		else if (origin == "NON_INDIAN")
		{
			cout<<points/400<<endl;
			points=0;
		}
		
	}
}
