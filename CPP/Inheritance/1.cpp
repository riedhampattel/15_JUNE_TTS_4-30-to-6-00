#include<iostream>
using namespace std;
//simple inheritance
class Parent//base class
{
	public :
		int x = 10;
		int y = 20;
};
class Child : public Parent //derived class
{
	public :
		void display()
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of y = "<<y;	
		}	
};
int main()
{
	Child c1;
	c1.display();
	return 0;
}
