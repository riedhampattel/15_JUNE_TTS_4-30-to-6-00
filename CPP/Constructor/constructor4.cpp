#include<iostream>
using namespace std;
class Shape
{
    private :
        int a1;
        int b1;
    public :
        Shape()//Default constructor
        {
            cout<<"\nDefault constructor called";
        }
        Shape(int a,int b)//paramerized constructor
        {
            cout<<"\nParameterized constructor called";
            cout<<"\nLength of Rectangle is = "<<a;
            cout<<"\nBreadth of Rectangle is = "<<b;
            a1 = a;
            b1 = b;
        }
        Shape(Shape &obj)//copy constructor
        {
            cout<<"\nCopy constructor called";
            cout<<"\nCopied Lenght of Rectangle = "<<obj.a1;
            cout<<"\nCopied Breadth of Rectangle = "<<obj.b1;
        }
};
int main()
{
    Shape s1;//default constructor
    Shape s2(10,20);//parameterized constructor
    Shape s3(s2);//copy constructor
    Shape s4 = s2;//copy constructor
    return 0;
}