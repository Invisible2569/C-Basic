// #include<iostream>
// using namespace std;

// class base1
// {
//     int a, b;
//     public:
//         base1(int x, int y)
//         {
//             a = x;
//             b = y;
//             cout<<"Calling constructor base_1...."<<endl;
//         }
//         void base1_display()
//         {
//             cout<<"The base 1 number is: "<<a<<" and: "<<b<<endl;
//         }
// };

// class base2
// {
//     int c , d;
//     public:
//         base2(int m, int n)
//         {
//             c = m;
//             d = n;
//             cout<<"Calling constructor base_2...."<<endl;
//         }
//         void base2_display()
//         {
//             cout<<"The base 2 number is: "<<c<<" and: "<<d<< endl;
//         }
// };

// class derived : public base1, virtual public base2 //Base class --> virtual_class called first, then called first inheritate_class..
// {
//     int e, f;
//     public:
//     /*
//         base1 and base2 have constructors that each take an argument. 
//         When i create a derived object, i must provide values for these constructors. 
//         If i don’t, the compiler won’t know how to initialize base1 and base2, which causes an error.
//     */
//         derived(int x, int y, int m, int n, int r, int s) : base1(x, y), base2(m, n)// rule of constructor_inheritance making
//         {
//             e = r;
//             f = s;
//             cout<<"Calling constructor derived class..."<<endl;
//         }
//         void derived_display()
//         {
//             cout<<"The base 2 number is: "<<e<<" and: "<<f<< endl;
//         }
// };

// int main()
// {
//     derived C_I(22, 55, 77, 88, 69, 96);
//     C_I.base1_display();
//     C_I.base2_display();
//     C_I.derived_display();

//     return 0;
// }

#include<iostream>
using namespace std;

class base1
{
    int a, b;
    public:
        base1()
        {
            
            cout<<"Calling constructor base_1...."<<endl;
            cout<<"a: ";
            cin>>a;
            cout<<"b: ";
            cin>>b;
        }
        void base1_display()
        {
            cout<<"The base 1 number is: "<<a<<" and: "<<b<<endl;
        }
};

class base2
{
    int c , d;
    public:
        base2()
        {
            
            cout<<"Calling constructor base_2...."<<endl;

            cout<<"c: ";
            cin>>c;
            cout<<"d: ";
            cin>>d;
        }
        void base2_display()
        {
            cout<<"The base 2 number is: "<<c<<" and: "<<d<< endl;
        }
};

class derived : public base1, virtual public base2 //Derived_class called "virtual_class first", then called first inheritate_class..left to rite
{
    int e, f;
    public:
        derived()
        {
            cout<<"e: ";
            cin>>e;
            cout<<"f: ";
            cin>>f;
            cout<<"Calling constructor derived class..."<<endl;
        }
        void derived_display()
        {
            cout<<"The base 2 number is: "<<e<<" and: "<<f<< endl;
        }
};

int main()
{
    derived d1;

    d1.base1_display();
    d1.base2_display();
    d1.derived_display();


    return 0;
}