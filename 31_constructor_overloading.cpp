#include<iostream>
using namespace std;

class Operator
{
    int a, b;

    public:

        Operator()
        {
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<"Enter the value of b: ";
            cin>>b;

            int multi = a * b;
            cout<<"The multiplication is: "<<multi<<endl;
        }

        Operator(int x, int y)
        {
            a = x;
            b = y;

            float divide = a / b;
            cout<<"The division number is: "<<divide<<endl;
        }

        Operator( int r)   
        {
            a = r;
            b = 3;

            int remainder = a % b;
            cout<<"The reminder of a is: "<<remainder<<endl;
        }
};

int main()
{
    Operator M;

    Operator D(14, 2);

    Operator R(77);

    return 0;
}