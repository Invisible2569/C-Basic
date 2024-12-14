#include<iostream>
using namespace std;

class base1
{
    public:
        void greet()
        {
            cout<<"Assalamu Alaikum"<<endl;
        }
};

class base2
{
    public:
        void greet()
        {
            cout<<"Hi, Hello"<<endl;
        }
};

class derived : public base1, public base2
{
    int a, b;
    public:
        void greet()//====> Thats the technique of using ambiguous resolution.......
        {
            base1 :: greet();
            // base2 :: greet();
        }
};
int main()
{
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();

    derived d;
    d.greet();
    return 0;
}