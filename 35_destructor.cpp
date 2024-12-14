#include<iostream>
using namespace std;
//----->Destructor don't take any arguments and not  return any value
int count = 0;

class Constructor_Destructor 
{   
    // int count = 0; if i do it, then i need "static_variable"...You know why..
    public:
        Constructor_Destructor()
        {
            count++;
            cout<<"Now calling constructor for num_("<<count<<")..."<<endl;
        }

        ~Constructor_Destructor()
        {
            cout<<"Destructor calling for num_{"<<count<<"}"<<endl;
            count--;
        }
};

int main()
{
    cout<<"Wr are now in main_function."<<endl;
    cout<<"Now I creating first object--> num_1."<<endl;
    Constructor_Destructor num_1;

    {
        cout<<"Here I creating 2 more object."<<endl;
        
        Constructor_Destructor num_2, num_3;
        
        cout<<"We are exit this block now."<<endl;
    }

    cout<<"Back in main_function."<<endl;

    return 0;
}   