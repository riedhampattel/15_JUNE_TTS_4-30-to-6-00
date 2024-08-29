#include<iostream>
using namespace std;
//simple inheritance
class Parent//base class
{
	public :
		Parent()//default constructor
		{
			cout<<"\nParent class property used";
		}
};
class Child : public Parent //derived class
{
	
};
int main()
{
	Child c1;
	return 0;
}
