#include<iostream>
#include<iomanip>//---Use for setw()...
using namespace std;
 
int main()
{
    //--->Pointer is a data type, Which hold other data_type address....

    int x=777;
    int *y = &x;

    //---> & (Address of) Opearator..
    cout<<"The address of x is: " << &x << endl;
    cout<<"The address of x is: " << y << endl <<"\n";

    //---> * (value at) Dereference Operator...
    cout<<"The value of x is: "<< x <<endl;
    cout<<"The value of x is: "<< setw(3) << *y <<endl <<"\n";

    //---> pointer to pointer...
    int **z = &y;//                ---> int *z = &y .. not possible..
    cout<<"The address of y is: "<< &y <<endl;
    cout<<"The address of y is: "<< z <<endl;// z store y address..
    cout<<"The value at address of x is: "<< *z <<endl;//...(*z) store 'y' data means 'y' address
    cout<<"The value at address value_at(value_at(z)) is: "<< **z <<endl; /* --> 
    ---> (**z) hold 'y' pointer data, and y hold x data, which is ('x')*/

    return 0;
}  