#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	//create a bool variable named even
	//create an int variable named value
	auto even = false;
	int value = 0;

	auto result = false;
	auto ch = 'a';

	cout<<"Enter a letter: ";
	cin>>ch;

	result = is_vowel(ch);

	if(result)
	{
		cout<<ch<<" is a vowel\n";
	}
	else 
	{
		cout<<ch<<" is not a vowel\n";
	}
	
	cout<<result<<"\n";

	return 0;

}
