#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;//---> static_variable  already initialize = "0", 
    //static_variable_and_function means it share "data without change for any object" or remind "previous object uses value"
    // ---> "oject_1 = count(1)"
    // ---> "oject_2 = count(2)"
    // ---> "oject_3 = count(3)"

    public:
        void set_data()
        {
            cout<<"Enter the id: "<<endl;
            cin>>id;
            count++; // Now static int count = 1; so, display show count = 1...
        }
        void display()
        {
            cout<<"Number "<<count<<" id is: "<<id<<endl;
        }

        static void get_count()
        {
            // cout<<"The id is: "<<id<<endl; -----> we can not use "id_variable", because "it is no "static_variable""..
            cout<<"The value of count is: "<<count<<endl;
        }
};

int employee :: count; // if we create "static_variable" then we should write like this "after create class"
// ------------------------------------> we can also initialize like this, (int employee :: count = 7; )

int main()
{
    employee r, s, a;

    r.set_data();
    r.display();
    r.get_count();

    s.set_data();
    s.display();       
    s.get_count();
    
    a.set_data();
    a.display();
    a.get_count();

    return 0;
}    