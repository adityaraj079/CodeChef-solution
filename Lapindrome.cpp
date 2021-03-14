#include <bits/stdc++.h>
using namespace std;

int check_anagram(string s1,string s2)
{
	int a1[26]={0}, a2[26]={0};
	
	if(s1.length()!=s2.length())
		return 0;
	
	for(int i=0; s1[i]!='\0'; i++)
	{
		a1[s1[i]-'a']++;
	}
	
	for(int i=0; s2[i]!='\0'; i++)
	{
		a2[s2[i]-'a']++;
	}
	
	for(int i=0; i<26; i++)
	{
		if(a1[i] != a2[i])
			return 0;
	}
	return 1;
}

void checkPalindrome(string input_String)
{
	int len = input_String.length();
	if (len % 2 ==0)
	{
		int test = len/2;
		string first_half = input_String.substr(0,test);
		string second_half = input_String.substr(test,len);
		if(check_anagram(first_half, second_half))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else if (len % 2 ==1)
	{
		int test = len/2;
		string first_half = input_String.substr(0,test);
		string second_half = input_String.substr(test+1,len);
		if(check_anagram(first_half, second_half))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

int main()
{
	int test_cases;
	cin>>test_cases;
	for (int i=0; i<test_cases; i++)
	{
		string input_String;
		cin>>input_String;
		checkPalindrome(input_String);
	}
}
