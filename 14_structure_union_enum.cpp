#include<iostream>
using namespace std;
 
typedef struct Car      //---->typedef use for calling struct shorcut way.....
{
    int model;
    string name;
    float price;

    void dispaly()
    {
        cout << "Car model: " << model << endl;
        cout << "Car name: " << name << endl;
        cout << "Car price: " << price << endl;
    }
} C ;

typedef union Money
{
    int pounds;
    float dollar;
    //----> If i use string then it's give me error on main function.......

    void u_display()
    {
        cout<<"Price in pounds: "<<pounds<<endl;
        // cout<<"Price in dollar: "<<dollar<<endl;
    }
} M ;


int main()
{
    cout<<".............Structure............"<<endl;

    struct Car c1;
    c1.model;
    cout<<"Write car model: "<<endl;
    cin>>c1.model;
    cout<<"The car model is: "<<c1.model;

    C c2;//--> Here I call structure by (typedef shorcut keyword).......
    c2.name = "Royal Enfild";
    cout<<"\n The Car name is: "<<c2.name<<endl;

    C c3;      //-----> Giving value by (parameter) in (structure).......
    c3 = {6969, "Totota", 666.333};
    c3.dispaly();


    cout<<"..........-> Union <-................"<<endl;
    
    M m1;
    m1.pounds = 777;
    // m1.dollar = 333.33;    // union means we can use (only one data in one time) >.... 
    m1.u_display();


    cout<<"............Enum>>>>>>......."<<endl;

    enum food {sugar, salt, burger, pizza};
    cout<<"Burger positional value is: "<<burger<<endl;
    cout<<"That will show true value [1]: "<<(burger == 2) <<endl; 
    //---> "Enum" basically use for knowing "data_position" like this (burger = 2)

    food m2;
    m2 = salt;
    cout<<"That will show false value [0]: "<<( m2 == 3) <<endl;

    return 0;  
}