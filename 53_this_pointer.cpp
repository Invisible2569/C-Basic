#include<iostream>
using namespace std;

class X
{
    int a;
    public:
        // X & set_data(int a)
        void set_data(int a)// if we create same name variable then needs "this pointer"...
        {
            this->a = a;
            // return *this;
        }
        void display()
        {
            cout<<"The value of a = "<<a<<endl;
        }
};

int main()
{
    X x;
    // x.set_data(69).display();
    x.set_data(77);
    x.display();

    return 0;
}