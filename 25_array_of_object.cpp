#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    static int increase_salary;

    public:
        void set_data()
        {
            salary = increase_salary;
            increase_salary = increase_salary + 10;// The procedure of increasing....
            cout<<"Enter your id: "<<endl;
            cin>>id;
        }
        void display()
        {
            cout<<"The employee id is: "<<id <<" and his salary is: "<<salary<<endl;
        }
};

int Employee :: increase_salary = 777;

int main()
{
    int n;
    cout<<"How many employee you have: "<<endl;  
    cin>>n;

    Employee destroy[n]; 
    for (int i = 1; i <= n; i++)
    {
        destroy[i].set_data();
        destroy[i].display();
    }

    Employee l;
    l.set_data();
    l.display();
       
    return 0;
}