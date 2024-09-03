#include<iostream>
using namespace std;
//function overriding
class Parent
{
	public :
		void display()
		{
			cout<<"\nParent class member function";
		}
};
class Child : public Parent
{
	public :
		void display()
		{
			cout<<"\nChild class member function";
		}
};
int main()
{
	Child c1;
	c1.display();
	return 0;
}
