#include<iostream>
using namespace std;
//function overloading
class Shape
{
	public :
		void shape(int side)
		{
			cout<<"\Area of square = "<<side*side;
		}
		void shape(double radius)
		{
			cout<<"\nArea of circle = "<<3.14*(radius*radius);
		}
		void shape(int l,int b)
		{
			cout<<"\nArea of rectangle = "<<l*b;
		}
		void shape(int l,int b,int h)
		{
			cout<<"\nVolume of cube = "<<l*b*h;
		}
};
int main()
{
	Shape s1;
	s1.shape(4);
	s1.shape(4,5);
	s1.shape(4,5,6);
	s1.shape(2.65);
	return 0;
}
