#include<iostream>
using namespace std;
//Diamond problem
class Parent
{
	public :
		Parent()
		{
			cout<<"\nHello from Parent class";
		}
		void diplay()
		{
			cout<<"\nHello from member function of Parent class";
		}
};
class Child1 : virtual public Parent
{
	public :
		Child1()
		{
			cout<<"\nHello from Child1 class";
		}
};
class Child2 : virtual public Parent
{
	public :
		Child2()
		{
			cout<<"\nHello from Child2 class";
		}
};
class GrandChild : public Child1,public Child2
{
	public :
		GrandChild()
		{
			cout<<"\nHello from Grand Child class";
		}
};
int main()
{
	GrandChild gc;
	gc.diplay();
	return 0;
}
