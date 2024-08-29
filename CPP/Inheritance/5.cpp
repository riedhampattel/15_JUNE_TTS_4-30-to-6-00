#include<iostream>
using namespace std;
//Hierarchiecal inheritance
class Parent
{
	public :
		Parent()
		{
			cout<<"\nParent class constructor called";	
		}	
};
class Child1 : public Parent
{
	
};
class Child2 : public Parent
{
	
};
int main()
{
	Child1 c1;
	Child2 c2;
	return 0;
}
