#include<iostream>
using namespace std;
//operator overloading
class Complex
{
	private :
		int real;
		int imag;
	public :
		Complex()
		{
			real = 0;
			imag = 0;
		}
		Complex(int r,int i)
		{
			real = r;
			imag = i;
		}
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
		void display()
		{
			cout<<"\nreal = "<<real<<" imag = "<<imag;
		}
};
int main()
{
	Complex c1(20,30);
	c1.display();
	Complex c2(10,20);
	c2.display();
	Complex c3 = c1 + c2;
	c3.display();
	return 0;
}
