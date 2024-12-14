#include<iostream>
using namespace std;
 
int sum(int x, int y)
{
    cout<<"Sum of 2 arguments: "<<endl;
    return x+y;
}

int sum(int x, int y, int z)
{
    cout<<"\nSum of 3 arguments: "<<endl;
    return x+y+z;
}

int volume(double radius, int height)
{
    cout<<"\nThe volume of cylinder is: "<<endl;
    return (3.14 *radius*radius*height);
}

int volume(int length)
{
    cout<<"\nThe volume of cube is: "<<endl;
    return (length*length*length);
}

int volume(int height, int base, int length)
{
    cout<<"\nThe volume of rectangular is: "<<endl;
    return (height*base*length);
}

int main()
{
    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    int c;
    cout<<"Enter third number: ";
    cin>>c;

    cout<<sum(a,b);

    cout<<sum(a, b, c);//function overloading, here,,,method auto defined parameter by function...function with "same name"...

    cout<<volume(a,b);
    cout<<volume(c);
    cout<<volume(a, b, c);

    return 0;
}   