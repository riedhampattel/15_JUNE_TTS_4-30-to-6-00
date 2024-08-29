#include<iostream>
using namespace std;
//multiple inheritance
class Parent1
{
	public :
		Parent1()
		{
			cout<<"\nHello from Parent - 1";	
		}	
};
class Parent2
{
	public :
		Parent2()
		{
			cout<<"\nHello from Parent - 2";
		}
};
class Child : public Parent1,public Parent2
{
	
};
int main()
{
	Child c1;
	return 0;
}
