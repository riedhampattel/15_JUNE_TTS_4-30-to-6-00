#include<iostream>
using namespace std;
class Demo
{
    private :
        int i;
        string n;
    public :
        Demo(int id,string name)//parameterized constructor
        {
            i = id;
            n = name;
        }
        void display()
        {
            cout<<"\nId = "<<i;
            cout<<"\nName = "<<n;
        }
        Demo(Demo &obj)//copy constructor
        {
            i = obj.i;
            n = obj.n;
        }
};
int main()
{
    Demo d1(101,"Rahul");//parameterized constructor
    d1.display();
    Demo d2 = d1;//copy constructor
    d2.display();
    Demo d3(d1);//copy constructor
    d3.display();
    return 0;
}