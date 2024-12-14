#include<iostream>
using namespace std;

int sum(int x, int y)
{
    //Formal parameter ("x" and "y") getting value from "Actual parameter ("a" and "b)""
    int c = x + y;

    return c;
}

//.......Fuction prototype....
//.... data_type fuction_name(arguments);
void multi(int, int);
 
int main()
{
    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"The sum of a and b is: "<<sum(a,b)<<endl;//--->If we have "return_type" then we can call function like this...

    cout<<"\nFunction protoype....:"<<endl;
    multi(a,b);

    return 0;
}

void multi(int r, int s)
{
    int multi = r*s;
    cout<<"The multipication of a and b is: "<<multi<<endl;
}   