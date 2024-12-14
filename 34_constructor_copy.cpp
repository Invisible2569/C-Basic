#include<iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number(){ a = 777;}
        //------------------->When no copy constructor is found, compiler supplies his own copy constructor...
        Number(int x)
        {
            a = x;
        }

        Number(Number &obj)//Coping object by constructor
        {
            cout<<"Copy constructor call: ->"<<endl;
            a = obj.a;
        }
        void display()
        {
            cout<<"The number is: "<<a<<endl;
        }
};

int main()
{
    Number x, y, z(69), s;
    x.display(); 
    y.display(); 
    z.display(); 

    Number z1(z);
    z1.display();

    Number x1(25);//Without making copy constructor...its can run by compiler own copy_constructor..
    x1.display();

    s = z;//Copy constructor not called, Because, those two_object are already exist,,and already have some_value..
    // s.display();

    Number y1 = y;//That will happen...Because, newly_object create..and it can assign previous object_value or any data.


    return 0;
}   