#include<iostream>
using namespace std;

class Base
{
    public:
        int base_variable;
        void display()
        {
            cout<<"The value of base_variable = "<<base_variable<<endl;
        }
};

class Derived : public Base
{
    public:
        int derived_variable;
        void display()
        {
            cout<<"The value of derived_variable = "<<derived_variable<<endl;
        }
};

int main()
{
    Base *base_class_pointer;
    Base base_obj;

    Derived derived_obj;

    base_class_pointer = & derived_obj;// pointing base_class_pointer to derived_class 

    base_class_pointer->base_variable = 77;
    base_class_pointer->display();

    // base_class_pointer->derived_variable = 69;  that will throw error

    // Derived *derived_class_pointer;
    // derived_class_pointer->derived_variable = 25; ======> That's will show "segment falls", but run
    // derived_class_pointer->display();

    Derived *derived_class_pointer = & derived_obj;
    derived_class_pointer->derived_variable = 33;
    derived_class_pointer->display();

    derived_class_pointer->base_variable = 7569;
    // derived_class_pointer->display();
    base_class_pointer->display();
    return 0;
}