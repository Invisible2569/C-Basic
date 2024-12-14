#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}*/
class con
{
    int a, b;//--->which i write first that initialize first..
    public:
        // con(int x, int y): a(x), b(y)
        // con(int x, int y): a(x), b(x + y)
        // con(int x, int y): a(x), b(69 * y)
        // con(int x, int y): a(x), b(a * y)
        con(int x, int y): a(b * x), b(y)//--->which i write first(a) that initialize first.. so i sill get garbage value because i use (b) before initialize it.
        {
            // a = x;
            cout<<"The a is \"a\": "<<a<<endl;
            cout<<"The a is \"b\": "<<b<<endl;
        }
};

int main()
{
    con c1(6, 9);

    return 0;
}