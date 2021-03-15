#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int test_cases;
	cin>>test_cases;
	while (test_cases--)
	{
		int a=0;
		long int R,C;
		int X=min(R,C);
		long long int matrix [C][X], row[C], column[C];
		cin>>R>>C>>X;
		while (R--)
		{
			for (int i=0; i<C; i++)
			{
				for (int j=0; j<C; j++)
				{
					cin>>matrix[i][j];
				}
			}
			for (int i=0; i<C; i++)
			{
				for (int j=0; j<C; j++)
				{
					row[a] = matrix[0][i] + matrix[0][i-1];
					column[a] = matrix[i][0] + matrix[i-1][0];
					a++;	
				}
			}
		}
		for (int i=0; i<10; i++)
		{
			cout<<"Row "<<row[a]<<endl;
			cout<<"Column "<<column[a]<<endl;
			
		}
	}
	
}
