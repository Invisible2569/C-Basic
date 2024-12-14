#include<iostream>
using namespace std;

class complex
{
    int a,b;

    public:
        void set_data(int x, int y)
        {
            a = x;
            b = y;
        }
        // we can only make "class_data_type" with function "arguments or perimeter"    
        // complex r = 10;                       
        void sum_complex(complex r, complex s)//if we want work with "object", then we should make "variable by "class_data_type"
        {
            a = r.a + s.a;
            b = r.b + s.b;//---> That's how we can use "class_data_type"----- 
        }
        void display()
        {
            cout<<"The complex number is: "<< a <<"+"<<b<<"i"<<endl;
        }
};

int main()
{
    complex c1, c2, c3;// That's are class object....

    c1.set_data(3,4);
    c1.display();

    c2.set_data(4,3);
    c2.display();

    c3.sum_complex(c1, c2);// passing object as an arguments...
    c3.display();

    return 0;  
}  