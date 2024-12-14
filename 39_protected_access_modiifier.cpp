#include<iostream>
using namespace std;

class Base
{
    protected:
        int a;
        Base(int x)
        {
            a=x;
        }

    private:
        int b;    
};

/*
                        ---->Public Derivation<----->Private Derivation<---->Protected Derivation<----

    1.Private members          Not Inherited     ||     Not Inherited   ||     Not Inherited              
    2.Protected members        Protected         ||     Private         ||     Protected                    
    3.Public members           Public	         ||     Private         ||     Protected   
*/

class Derived : protected Base
{   
    public:
    Derived(int x) : Base(x)
    {
        a = x;
        cout<<"The a is: "<<a<<endl;
    }
};

int main()
{
    // Base b;
    // cout<<b.a;  Will not work since a is protected in both base as well as derived class
    Derived d(77);
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}