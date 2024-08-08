//Write a C++ program to check whether a character is an alphabet, digit or special character.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\nEnter the character to check = ";
	cin>>ch;
	
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		cout<<"\n"<<ch<<" is an Alphabet";
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"\n"<<ch<<" is a Number";
	}
	else
	{
		cout<<"\n"<<ch<<" is a special character";
	}
	
	return 0;
}
