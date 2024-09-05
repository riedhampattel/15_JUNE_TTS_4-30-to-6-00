#include<iostream>
using namespace std;
class Parent//abstract class
{
	public :
		virtual void display()
		{
			cout<<"\nHello from member function of Parent class";
		}
};
class Child : public Parent
{
	public :
		void display()
		{
			cout<<"\nHello from member function of Child class";
		}
};
int main()
{
	Child c;
	c.display();
	return 0;
}
