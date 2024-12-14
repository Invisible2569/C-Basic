#include<iostream>
using namespace std;

int c;

int main()
{
    // ----> Data types and using Global variable <----//

    int a, b,c;
    
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    c=a+b;
    cout<<"The sum is c: "<<c<<endl; 

    //--> The rule of using global variable is (::) using this....
    
    cout<<"Enter the global c value: "<<endl;
    cin>>::c;
    cout<<"The global c value is: "<<::c<<endl;

    //-----> Using data types & Knowing data length <-----

    float d=3.14;// or... float d=3.14f or float d=3.14F...
    long double e=3.14L;// or long double e=3.14l or long double e = 3.14....
    cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;

    cout<<"Know the data length in byte by size_of...: "<<sizeof(a)<<endl;
    cout<<"Know the data length in byte by size_of...: "<<sizeof(3.14F)<<endl;
    cout<<"Know the data length in byte by size_of...: "<<sizeof(3.14l)<<endl;
    cout<<"Know the data length in byte by size_of...: "<<sizeof(3.14L)<<endl;
    cout<<"Know the data length in byte by size_of...: "<<sizeof(3.14)<<endl;// double length..

    //---> Reference variable <----

    int x=69;
    int &y=x;

    cout<<"The value of x: "<<x<<endl;
    cout<<"The value of y: "<<y<<endl;

    //---> Typecasting <---

    int r=7;
    float s=9.77;

    cout<<"The value of ints is: "<<(float) r <<endl;
    cout<<"The value of intg is: "<<float (r) <<endl;
    cout<<"The value of flo  is: "<<(int) s   <<endl;
    cout<<"The value of flo  is: "<<int (s)   <<endl;

    cout<<"The sum of r +s is :"<< r + s<<endl;
    cout<<"The sum of r +s is :"<< r + int(s)<<endl;
    cout<<"The sum of r +s is :"<< r + (int)s<<endl;

    return 0;
}