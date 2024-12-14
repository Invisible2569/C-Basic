#include<iostream>
using namespace std;

class Employee
{
    public:

        int id;
        float salary;

        Employee(int i)
        {
            id = i;
            salary = 777.69;

            cout<<"The id is: "<<id<<" and salary is: "<<salary<<endl;
        }

        // Employee() {}
};

/*
    // Derived Class syntax
        class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
        {
            class members/methods/etc...
        }

        1. Default visibility mode is private
        2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
        3. Private Visibility Mode: Public members of the base class become private members of the derived class
        4. Private members are never inherited
*/



class programmer : Employee
{
    public:

    int known_language = 7;

    programmer(int i) : Employee(i)
    {
        id = i;
    }

    void get_data()
    {
        cout<<"The id is: "<<id<<endl;
    }
};

int main()
{
    Employee r(101), s(202);

    cout<<r.salary<<endl;
    cout<<s.salary<<endl;

    programmer x(96);
    cout<<x.known_language<<endl;
    x.get_data();
    
    return 0;
}  