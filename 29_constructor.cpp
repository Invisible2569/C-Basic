#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    Complex() // "constructor" means making function by "class_name"..it's a "Default_constructor" --> it don't take any "parameter"..
    {  
        cout << "Enter real digit: ";
        cin >> a;
        cout << "Enter complex digit: ";
        cin >> b;

        
    }
    void display()
    {
        cout << "The complex number is: " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex n1, n2, n3; // You can see when "object_made" it's automatically run.....in terminal or output

    // n1.display();
    // n2.display();
    // n3.display();

    return 0;
}

/*
    ----> A constructor should be declared in the public section of the class
    ----> They are automatically invoked(called) whenever the object is created
    ----> They cannot return values and do not have return types
    ----> It can have default arguments
    ----> We cannot refer to their address

*/   