#include<iostream>
using namespace std;

class Complex
{
    int a, b;

    public:

    Complex(int x = 25, int y = 77)
    {
        a = x;
        b = y;
    }
    void display();
};

void Complex :: display()
{
    cout<<"The complex number is: "<< a <<"+"<< b <<"i"<<endl;
}

int main()
{
    Complex c1(7, 69);
    c1.display();

    Complex c2(69);// For default arguments...
    c2.display();

    Complex c3;// For default arguments...------->right..
    c3.display();
       
    return 0;
}