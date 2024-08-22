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
};
int main()
{
	Circle c1;
	double r;
	cout<<"\nEnter the radius of aq circle = ";
	cin>>r;
	c1.setradius(r);
	c1.calcarea();
	return 0;
}
