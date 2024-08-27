#include<iostream>
using namespace std;
class Demo
{
    public :
        Demo()//default constructor
        {
            cout<<"\nDefault constructor called";
        }
};
int main()
{
    Demo d1;
    Demo d2;
    Demo d3;
    return 0;
}