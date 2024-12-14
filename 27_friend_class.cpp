// #include<iostream>
// using namespace std;

// // Forward declaration
// class Complex;

// class Calculator
// {
//     public:
//         int sum(int a, int b)
//         {
//             return a + b;
//         }

//         int sum_real_complex(Complex, Complex);

//         int sum_complex_part(Complex, Complex);

//         // Function to display a complex number using Complex's display method
//         void display_complex(Complex);
// };

// class Complex
// {
//     int a;
//     int b;

//     // Individually declaring functions as friends
//     // friend int Calculator::sum_real_complex(Complex r, Complex s);
//     // friend int Calculator::sum_complex_part(Complex r, Complex s);

//     // Aliter: Declaring the entire calculator class as friend
//     friend class Calculator;

//     public:
//         void set_data(int x, int y)
//         {
//             a = x;
//             b = y;
//         }

//         void display()
//         {
//             cout << "The complex number is: " << a << "+" << b << "i" << endl;
//         }
// };

// int Calculator::sum_real_complex(Complex r, Complex s)
// {
//     return r.a + s.a;
// }

// int Calculator::sum_complex_part(Complex r, Complex s)
// {
//     return r.b + s.b;
// }

// // Function to call the Complex class's display function
// void Calculator::display_complex(Complex c)
// {
//     c.display();  // Calling the display function of the Complex class
// }

// int main()
// {
//     Complex n1, n2;
//     n1.set_data(3, 4);
//     n2.set_data(4, 3);

//     Calculator cal;

//     // Accessing display function via Calculator
//     cout << "Displaying first complex number using Calculator:" << endl;
//     cal.display_complex(n1);

//     cout << "Displaying second complex number using Calculator:" << endl;
//     cal.display_complex(n2);

//     int real_result = cal.sum_real_complex(n1, n2);
//     cout << "Sum of real parts: " << real_result << endl;

//     int complex_result = cal.sum_complex_part(n1, n2);
//     cout << "Sum of imaginary parts: " << complex_result << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    Complex sum_complex(Complex r, Complex s); //-------> we can make class_function with "other_class_name"

    Complex sun(); //-------> we can make class_function with "other_class_name" in friend class

    void display_complex(Complex); // Function for display "Complex_object" by using 'Complex'->"display function"..
};

class Complex
{
    int a, b;
 
    friend class Calculator;// Making Calculator as a friend class so it can access private members of Complex_class

    friend void nothing(Complex x);//Making friend function for use Complex_class data..

    public:

        void set_data(int x, int y)
        {
            a = x;
            b = y;  
        }

        void display()
        {
            cout << "The complex number is: " << a << "+" << b << "i" << endl;
        }
};

Complex Calculator::sum_complex(Complex r, Complex s)// we want 2 result so we can nat make it "int_type"...chat gpt
{
    Complex result;
    // result.a = r.a + s.a; 
    // result.b = r.b + s.b; 
    result.set_data((r.a + s.a), (r.b + s.b));
    return result;
}

void Calculator::display_complex(Complex c)// Function to call the Complex class's display function
{
    c.display(); 
}

void experiment();

int main()
{
    Complex n1, n2, sum;

    n1.set_data(3, 4);
    n2.set_data(4, 6);

    Calculator cal;

    cout << "Displaying first complex number using Calculator:" << endl;
    cal.display_complex(n1);

    cout << "Now second Complex number is :" << endl;
    cal.display_complex(n2);

    sum = cal.sum_complex(n1, n2);    // Sum the complex numbers

    cout << "The sum of the object complex numbers is: " << endl;
    sum.display();

    nothing(n1);
    nothing(n2);

    experiment();

    return 0;
}

void nothing(Complex x)
{
    int multi = x.a * x.b;
    cout << "The complex number multiplication is: " << multi << endl;
}
void experiment()
{
    Complex sa; // we can use "class_object" int other function and we can use those "object.function()"
    // Complex sa();----That's give warning but running...
    sa.set_data(6,9);
    sa.display();
}
