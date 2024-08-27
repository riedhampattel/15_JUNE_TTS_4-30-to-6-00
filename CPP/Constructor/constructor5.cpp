#include<iostream>
using namespace std;
class Shape
{
    public :
        Shape(string name,int side)//square
        {
            cout<<"\nArea of "<<name<<" is = "<<side*side;
        }
        Shape(string name,double radius)//circle
        {
            cout<<"\nArea of "<<name<<" is = "<<3.14*(radius*radius);
        }
        Shape(double radius,string name)//circle
        {
            cout<<"\nArea of "<<name<<" is = "<<3.14*(radius*radius);
        }
        Shape(string name,int l,int b)//rectangle
        {
            cout<<"\nArea of "<<name<<" is = "<<l*b;
        }
        Shape(string name,int l,int b,int h)//cube
        {
            cout<<"\nArea of "<<name<<" is = "<<l*b*h;
        }
        Shape(string name,double b,double h)//triangle
        {
            cout<<"\nArea of "<<name<<" is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s1("Square",4);
    Shape s2("Circle",4.5);
    Shape s3(5.5,"Circle");
    Shape s4("Rectangle",4,5);
    Shape s5("Cube",4,5,7);
    Shape s6("Triangle",5.0,2.8);
    return 0;
}