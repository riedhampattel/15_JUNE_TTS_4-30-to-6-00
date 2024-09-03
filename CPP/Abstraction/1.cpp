#include<iostream>
using namespace std;
class Demo //Base class
{
	private : //within the class
		int x = 10;
		string s1 = "Private";
	protected : //within the class or in derived class
		int y = 20;
		string s2 = "Protected";
	public : //within the class or outside the class
		int z = 30;
		string s3 = "Public";
};
class Child : public Demo //Derived class
{
	private :
		int n1;
		string str1;
	public :
		Child()
		{
			n1 = y;
			str1 = s2;
		}
		void display()
		{
			cout<<"\nValue of n1 = "<<n1;
			cout<<"\nValue of str1 = "<<str1;
		}
};
int main()
{
	Demo d1;
//	can not access outside the class as x and s1 are private data members
//	cout<<"\nThe value of x = "<<d1.x;
//	cout<<"\nThe value of s1 = "<<d1.s1;
	
	Demo d2;
//	can not access outside the class or outside the derived class as x and s1 are protected data members
//	cout<<"\nThe value of y = "<<d2.y;
//	cout<<"\nThe value of s2 = "<<d2.s2;
	
	Child c1;
	c1.display();
	
	Demo d3;
	cout<<"\nValue of z = "<<d3.z;
	cout<<"\nValue of s3 = "<<d3.s3;
	
	return 0;
}
