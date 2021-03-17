#include <iostream>
using namespace std;

int main()
{
	int test_cases;
	cin>>test_cases;
	for (int i=0; i<test_cases; i++)
	{
		int D, C;
		cin>>D>>C;
		int A[3],B[3];
		cin>>A[0]>>A[1]>>A[2];
		cin>>B[0]>>B[1]>>B[2];
		int total1, total2;
		total1 = A[0]+A[1]+A[2];
		total2 = B[0]+B[1]+B[2];
		int no_coupon, coupon_appli;
		coupon_appli = total1+total2+C;
		if (total1 < 150 || total2 < 150)
			coupon_appli += D;
		no_coupon = total1+total2+D+D;
		if (coupon_appli < no_coupon)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
