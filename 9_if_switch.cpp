#include<iostream>
using namespace std;

int main()
{
    //--if-else leader......

    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    if(age<18)
    {
        cout<<"You can not come to the party"<<endl;
    }

    else if(age == 18)
    {
        cout<<"You need card for entry"<<endl;
    }

    else
    {
        cout<<"You can enter."<<endl;
    }


    //------- Switch_Case---------

    int salary;
    cout<<"Enter your salary: "<<endl;
    cin>>salary;

    switch (salary)
    {
    case 500:
        cout<<"You need more money"<<endl;
        break;

    case 1000:
        cout<<"You can survive"<<endl;
        break;

    case 7777:
        cout<<"You are rich"<<endl;
        break;        
    
    default:
        cout<<"Nothing to say"<<endl;
        break;
    }
}  