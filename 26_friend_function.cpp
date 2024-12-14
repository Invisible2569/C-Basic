#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;

    public:

        friend  Complex sum_complex(Complex r, Complex s);//--> "friend_function" initialize technique..
        // friend :: Complex sum_complex(Complex r, Complex s);--> also can write that way...

        void set_data(int x, int y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<"The complex number is: "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex sum_complex(Complex r, Complex s)//---> We can make "function by "class_name"...
{
    Complex Number;
    Number.set_data((r.a + s.a), (r.b + s.b));//----> Here we use "friend function"...
    return Number;
}

int main()  
{
    Complex n1, n2;

    n1.set_data(3,4);
    n1.display();

    n2.set_data(4,3);
    n2.display();

    Complex display;
    display = sum_complex(n1, n2);
    display.display();
       
    return 0;
}
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need "object_name.variable_name" to access any member.
*/