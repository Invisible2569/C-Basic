#include<iostream>
using namespace std;

int glo=6;

void test()
{
    int ncall;
    cout<<"That's print global variable(6)....: "<<glo<<endl;//--> That's don't know main global variable
}
int main()
{
    int a=7, b=77;
    // cout<<"Here the value of a is: "<<a <<" and the value of b is: "<<b <<endl;

    float pi=3.14;
    // cout<<"The value of pi is: "<<pi<<endl;

    char letter ='R';
    // cout<<"The letter is: "<<letter<<endl;

    bool na=true;

    int glo=9;

    glo=77;//---> Local variable preference high.....

    test(); //---> That's print global var.... 

    cout<<"That's print main function ->local<- global: "<<glo<<endl;

    return 0;
}   