#include<iostream>
using namespace std;
class Demo
{
    public :
        Demo(int id,string name)//parameterized constructor
        {
            cout<<"\nParameterized constructor called";
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
        }
};
int main()
{
    Demo d1(101,"Rahul");
    Demo d2(102,"Mehul");
    Demo d3(103,"Yash");
    return 0;
}