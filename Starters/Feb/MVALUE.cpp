#include <bits/stdc++.h> 
using namespace std;

void printPairs(int arr[], int n, int k) 
{ 
    // Consider each and every pair 
    int test_arr[10];
    int a=0;
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            // Print if their modulo equals to k 
            test_arr[a]=arr[i] * arr[j] + arr[i] - arr[j];
            a++;
                
            } 
        } 
    } 
  
    return isPairFound; 
} 
int main()
{
	int test_cases;
	cin>>test_cases;
	for (int i=0; i<test_cases; i++)
	{
		int n;
		int arr1[n];
		cin>>n;
		for (int j=0; j<n; j++)
		{
			cin>>arr1[j];
		}
		printPairs(arr1, n);
		
	}
}
