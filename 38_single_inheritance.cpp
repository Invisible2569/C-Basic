#include<iostream>
using namespace std;

class Base
{
    int num_1;//private data...so it cannot be inherit
    public:
        int num_2;
        void set_data();
        int num1();//------->need for access private_data
        // int num2();
};

void Base :: set_data()
{
    cout<<"Enter data_1: ";
    cin>>num_1;
    cout<<"Enter data_2: ";
    cin>>num_2;
}
int Base :: num1()
{
    return num_1;
}
// int Base :: num2()....Because its public_data
// {
//     return num_2;
// }


// class Derived : public Base
// {
//     public:
//         int data;
//         void process();
//         void display();
// };

class Derived : private Base
{
    public:
        int data;
        void process();
        void display();
};

void Derived :: process()
{
    set_data();//---->doing that because "private_baseClass" make it private
    data = num_2 * num1();
}
void Derived :: display()
{
    cout<<"The data_1 is: "<<num1()<<endl;//num1---return type
    cout<<"The data_2 is: "<<num_2<<endl;
    cout<<"The data_3 is: "<<data<<endl;
}

int main()
{
    Derived data;
    // data.set_data();
    
    data.process();
    data.display();
    return 0;
}