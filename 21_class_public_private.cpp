#include<iostream>
using namespace std;
 
class Number
{
    private:
        int a,b,c;

    public:
        int d,e;

    void set_data(int a, int b, int c);

    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }    
};

void Number :: set_data(int x, int y, int z)// That's the rule of "class- function" create later..
{
    a = x;
    b = y;
    c = z;
}

int main()
{
    Number number;
    // number.a =69; ......> That's not possible because "a" variable is "private"...
    number.d =7;
    number.e =77;

    number.set_data(6, 9, 69);
    number.display();


    return 0;
}   