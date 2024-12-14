#include<iostream>

#include<iomanip>//--->use for manupulators...

using namespace std;

int main()
{   
    //--> Constant variable.....
    const int a=69;
    // a=69;//--> I cannot do it because of a is constant...
    cout<<"The value of a is: "<<a<<endl;

    //--> Manipulators.....
    int r=7, s=77, t=777, w=7777;

    cout<<"The value of r without setw..: "<<r<<endl;
    cout<<"The value of s without setw..: "<<s<<endl;
    cout<<"The value of t without setw..: "<<t<<endl;
    cout<<"The value of x without setw..: "<<w<<endl;

    cout<<"The value of r with setw..: "<<setw(4)<<r<<endl;
    cout<<"The value of r with setw..: "<<setw(4)<<s<<endl;
    cout<<"The value of r with setw..: "<<setw(4)<<t<<endl;
    cout<<"The value of r with setw..: "<<setw(4)<<w<<endl;
    
    //--> Operator precedence....
    int x=5, y=10;
    int z=x*5+y;
    cout<<"\nThe value of z: "<<z<<endl;

    int Z=(((((x*10)+7)-y)+10)-6);
    cout<<"The value of Z is..: "<<Z<<endl;
    
    return 0;   
}