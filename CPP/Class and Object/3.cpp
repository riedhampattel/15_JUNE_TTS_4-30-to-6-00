//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void setradius(double r)
		{
			radius = r;
		}
		void calcarea()
		{
			double area = 3.14 * (radius*radius);
			cout<<"\nArea of Circle is = "<<area;
		}
		double calcsur()
		{
			double sur = 2 * (3.14 * radius);
			return sur;
		}
};
int main()
{
	Circle c1,c2;
	double r;
	cout<<"\nEnter the radius of circle = ";
	cin>>r;
	c1.setradius(r);
	c1.calcarea();
	cout<<"\nEnter the radius of circle = ";
	cin>>r;
	c2.setradius(r);
	cout<<"\nSurcumference of circle is = "<<c2.calcsur();
	return 0;
}
