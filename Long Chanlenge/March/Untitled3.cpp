#include <bits/stdc++.h>
#define Int long long int
#define end "\n"
using namespace std;

int main()
{
	long int test_cases;
	cin>>test_cases;
	while (test_cases--)
	{
		long int N,E,H,A,B,C;
		int total, no_omlette, no_milkshake, no_cake,ck;
		int output = 0;
		cin>>N>>E>>H>>A>>B>>C;
//		if (A<B && A<C)
//		{
//			first(N,E,H,A,B,C,no_omlette, no_milkshake, no_cake, total);
//		}
		for (int k=0; k<min(E,H); k++)
		{
			for (int i=k; i<E; i++)
			{
				for (int j=k; j<H; j++)
				{
					total += k+i/2+j/3;
					if (total>=N)
					{
						output=math.min(output,C*k+A*i/2+B*j/3);
						ck=total;
					}
				}
			}
		}
		cout<<total<<endl;
	}
}
