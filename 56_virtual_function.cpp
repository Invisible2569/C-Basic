#include<iostream>
using namespace std;

class Base
{
    public:
        int x = 77;
        virtual void display()
        {
            cout<<" '1->B'The value base class-> x is = "<<x<<endl;
        }
};

class Derived : public Base
{
    public:
        int y = 69;
        void display()
        {
            cout<<" '2->B'The value base class-> x is = "<<x<<endl;
            cout<<" '2->B'The value base class-> y is = "<<y<<endl;
        }
};

int main()
{
    Base *bcp;
    Base b_obj;
    bcp = &b_obj;
    bcp->display();
  
    Derived d_obj;

    bcp->display();

    bcp = &d_obj;
    bcp->display();

    bcp->display();// calling overloading_function with virtual_function depends on "where Object creating and calling".....
    return 0;
}