#include<iostream>
using namespace std;

class Complex
{
    protected:
        int a, b;
    public:
        void set_data()
        {
            cout<<"Enter real number: ";
            cin>>a;
            cout<<"Enter imaginary number: ";
            cin>>b;
        }
        void display()
        {
            cout<<"Real number is: "<<a<<endl
            <<"Imaginary number is: "<<b<<endl;
        }
} ;
int main()
{
    Complex c1;
    c1.set_data();
    c1.display();

    Complex c2;
    Complex *ptr = &c1;
    ptr->display();

    Complex *point = new Complex;
    // (*point).set_data(); Is exactly same as

    point->set_data();// Arrow operator means (pointer can refers object_variable_function) for use those

    (*point).display();// bracket need (*point),,, because (.)dot_operator higher precedence than (*)_operator
    

    // Array of is_object
    Complex *pointer = new Complex[3];
    

    return 0;
}