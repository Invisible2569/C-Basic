#include<iostream>//---> system made header file

#include"6_user.h"//--> user defined header file...you need first to make this type of header file..
//--> user defined header file give error, if that's not in current directory..

using namespace std;

int main()
{
    cout<<"Operator in C++"<<endl;

    //Assignment operator

    int a=77, b=7;
    char letter = 'R';

    //--> Arithmetics operator..........
    cout<<"The value of a + b is: "<< a + b<<endl;
    cout<<"The value of a - b is: "<< a - b<<endl;
    cout<<"The value of a * b is: "<< a * b<<endl;
    cout<<"The value of a / b is: "<< a / b<<endl;
    cout<<"The value of a % b is: "<< a % b<<endl;
    cout<<"The value of a++ is: "<< a++ <<endl;
    cout<<"The value of a-- is: "<< a-- <<endl;
    cout<<"The value of ++a is: "<< ++a <<endl;
    cout<<"The value of --a is: "<< --a <<endl;
    
    //--> comparison operator...
    cout<<"\nThe value of a==b: "<<(a==b)<<endl;
    cout<<"The value of a!=b: "<<(a!=b)<<endl;//--> logical operator need bracket...
    cout<<"The value of a<b: "<<(a<b)<<endl;
    cout<<"The value of a<=b: "<<(a<=b)<<endl;
    cout<<"The value of a>b: "<<(a>b)<<endl;
    cout<<"The value of a>=b: "<<(a>=b)<<endl;

    //--> Logical operator...(&& and || and !)
    cout<<"\nThe value of this logical operator: "<<((a==b) && (a!=b))<<endl;
    cout<<"The value of this logical operator: "<<((a==b) || (a!=b))<<endl;    
    cout<<"The value of this logical operator: "<<(!((a==b) || (a!=b)))<<endl;    


    //--> Bitwise operator...

    return 0;
}  