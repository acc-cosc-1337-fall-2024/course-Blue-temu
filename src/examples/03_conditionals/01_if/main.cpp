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

	//prompt user for a keyboard number
	//assign the number to the value variable
	cout<<"Enter a number: ";
	cin>>value;

	cout<<"Enter a letter: ";
	cin>>ch;


	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	even = is_even(value);

	//display even if number is even
	cout<<even<<"\n";

	auto odd = is_odd(value);
	cout<<odd<<"\n";

	result = is_vowel(ch);

	cout<<result<<"\n";



	return 0;
}
