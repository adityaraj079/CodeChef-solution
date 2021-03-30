#include <iostream>
using namespace std;

int main()
{
    int C,R,O;
    cin>>R>>O>>C;
    int rem_over = 20-O;
    int test = rem_over*6;
    int remaining = test*6;
    if (C+remaining > R)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}