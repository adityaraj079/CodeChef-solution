#include <bits/stdc++.h> 
using namespace std;

int XOR(int a, int b)
{
    return a ^ b;
}
int main()
{
	long int test_cases;
	cin>>test_cases;
	while (test_cases--)
	{
		long long int C;
		cin>>C;
		int d = 0;
		for (int i=C; i>0; i--)
		{
			if (pow(2,i)>=C)
				d=i;
		}
		int output=0,test;
		int a=0;
		for (int i=0; i<pow(2,d); i++)
		{
			for (int j=0; j<pow(2,d); j++)
			{	
				if (XOR(i,j) == C)
				{	
					test = i*j;
					if (test >output)
					{
						output=test;
					}
				}
			}
		}
		cout<<output<<endl;
	}
}
