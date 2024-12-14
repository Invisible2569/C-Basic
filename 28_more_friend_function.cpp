// #include<iostream>
// using namespace std;

// class num2;

// class num1
// {
//     int a;
//     friend void sum(num1, num2);
//     public:
//         void set_data_1()
//         {
//             cout<<"Enter first number: ";
//             cin>>a;
//         }
// };

// class num2
// {
//     int b; 
//     friend void sum(num1, num2);
//     public:
//         void set_data_2()
//         {
//             cout<<"Enter Second number: ";
//             cin>>b;
//         }
// };

// void sum(num1 r, num2 s)
// {
//     int sum = r.a+ s.b;
//     cout<<"The sum of a + b is: "<<sum;
// }

// int main()
// {
//     num1 n1;
//     n1.set_data_1();

//     num2 n2;
//     n2.set_data_2();

//     sum(n1, n2);

//     return 0;
// }


#include<iostream>
using namespace std;

class number_2;

class number_1
{
    int num_1;

    friend void swap(number_1 &, number_2 &);
    friend void display( number_1 &,  number_2 &);
    friend void divide( number_1 x, number_2 y);

    public:
        void set_data_3()
        {
            cout<<"Enter first digit: ";
            cin>>num_1;
        }
        // void display_1()
        // {
        //     cout<<"The first digit is: "<<num_1<<endl;
        // }
};

class number_2  
{
    int num_2;

    friend void swap(number_1 &x, number_2 &);
    friend void display( number_1 &,  number_2 &);
    friend void divide( number_1 x, number_2 y);

    public:
        void set_data_4()
        {
            cout<<"Enter second digit: ";
            cin>>num_2;
        }
        // void display_2()
        // {
        //     cout<<"The second digit is: "<<num_2<<endl;
        // }
};

void display( number_1 &r,  number_2 &s)// there not need to "reference_object".....
{
    cout<<"The value of a is: "<<r.num_1<<" and the value of b is: "<<s.num_2<<endl;
    
    // r.set_data_3(); .... r.num_1; ---we can access "class_function & data" by his "object"...
}

void swap(number_1 &r, number_2 &s)
{
    int temp = r.num_1;
    r.num_1 = s.num_2;
    s.num_2 = temp;
}

void divide( number_1 x, number_2 y)//-->> for show before and after --> swiping the vale also swap in main body like , a =10, b=5, then a= 5, b=10.. 
{
    int s = x.num_1 / y.num_2;
    cout<<x.num_1 <<"/"<<y.num_2<<" = "<<s<<endl;
}

int main()
{
    number_1 d1;
    d1.set_data_3();
    // d1.display_1();

    number_2 d2;
    d2.set_data_4();
    // d2.display_2();

    cout<<"Before swap the value is: "<<endl;
    display(d1, d2);

    divide(d1, d2);

    swap(d1, d2);

    cout<<"After swap the value is: "<<endl;
    display(d1, d2);

    divide(d1, d2);
    // d1.display_1();
    // d2.display_2();

    return 0;
}