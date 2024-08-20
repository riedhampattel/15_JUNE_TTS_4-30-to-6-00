//Write a c++ program to print "Function called" n number of times using recursion
#include<iostream>
using namespace std;
int display()//recursive function
{
	static int num = 5;
	if(num!=0)
	{
		cout<<"\nFunction called";
		num--;
		display();
	}
}
int main()
{
	display();
	return 0;
}
