#include<iostream>
using namespace std;

class Base_1
{
    protected:
        int base_one;
    public:
        void set_base_1()
        {
            cout<<"Enter base_1 value: ";
            cin>>base_one;
        }    
};

class Base_2
{
    protected:
        int base_two;
    public:
        void set_base_2()
        {
            cout<<"Enter base_2 value: ";
            cin>>base_two;
        }    
};

class Base_3
{
    protected:
        int base_three;
    public:
        void set_base_3()
        {
            cout<<"Enter base_3 value: ";
            cin>>base_three;
        }    
};


// class DerivedC: visibility-mode base1, visibility-mode base2--------> for "multiple_inheritance"
// {
//      Class body of class "DerivedC"
// };
class Derived : public Base_1, public Base_2, public Base_3
{
    public:
        int sum()
        {
            int sum = base_one + base_two + base_three;
            return sum;
        }
        void display()
        {
            set_base_1();
            set_base_2();
            set_base_3();

            cout<<"The value of base_1 is: "<<base_one<<endl
            <<"The value of base_2 is: "<<base_two<<endl
            <<"The value of base_3 is: "<<base_three<<endl
            <<"The some of base_one and base_two is: "<<sum()<<endl;
        }
};

int main()
{
    Derived multiple;
    multiple.display();
    return 0;
}