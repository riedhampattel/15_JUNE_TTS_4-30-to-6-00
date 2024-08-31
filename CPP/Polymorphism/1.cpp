#include<iostream>
using namespace std;
//constructor overloading
class Shape
{
	public :
		Shape(int side)
		{
			cout<<"\Area of square = "<<side*side;
		}
		Shape(double radius)
		{
			cout<<"\nArea of circle = "<<3.14*(radius*radius);
		}
		Shape(int l,int b)
		{
			cout<<"\nArea of rectangle = "<<l*b;
		}
		Shape(int l,int b,int h)
		{
			cout<<"\nVolume of cube = "<<l*b*h;
		}
};
int main()
{
	Shape s1(4);
	Shape s2(4,5);
	Shape s3(5.63);
	Shape s4(4,5,6);
	return 0;
}
