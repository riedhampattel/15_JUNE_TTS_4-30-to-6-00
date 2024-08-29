#include<iostream>
using namespace std;
//hybrid inheritance
class Parent
{
	public :
		Parent()
		{
			cout<<"\nHello from Parent";
		}
};
class Child1 : public Parent
{
	public :
		Child1()
		{
			cout<<"\nHello from Child1";
		}
};
class Child2 : public Parent
{
	public :
		Child2()
		{
			cout<<"\nHello from Child2";
		}
};
class GrandChild1 : public Child1
{
	
};
class GrandChild2 : public Child2
{
	
};
int main()
{
	cout<<"\nObject of Child1 class";
	Child1 c1;
	
	cout<<"\n\nObject of Child2 class";
	Child2 c2;
	
	cout<<"\n\nObject of GrandChild1 class";
	GrandChild1 gc1;
	
	cout<<"\n\nObject of GrandChild2 class";
	GrandChild2 gc2;
	
	return 0;
}
