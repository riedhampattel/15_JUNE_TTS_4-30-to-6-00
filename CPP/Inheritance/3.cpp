#include<iostream>
using namespace std;
//multilevel inheritance
class Parent
{
	public :
		Parent()
		{
			cout<<"\nParent class constructor called";	
		}	
};
class Child : public Parent
{
	public :
		Child()
		{
			cout<<"\nChild class constructor called";
		}
};
class GrandChild : public Child
{
	public :
		GrandChild()
		{
			cout<<"\nGrand Child constructor called";
		}	
};
int main()
{
	GrandChild gc1;
	return 0;
}
