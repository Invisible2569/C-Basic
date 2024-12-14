#include<iostream>
using namespace std;

inline void subtraction(int x , int y)// inline use  for reduce continuously calling times
{                       // if we use "inline function", then make sure the function is "short" like (1 or 2 line)
                        // because if the function is "big" then it's gets too much "storage"

    // static int c=0;// static use for store  the value in memory only  once time....// Do not  use static in inline function
    // c =c+1; // Next time the value of "c" will be incase repeatedly ..
    int sub = x -y ;     
    cout<<"The subtraction of a and b is: "<<sub<<endl;
}

void salary (int x, float y = 7.7)// Default argument should be at last position.......
{
    int z = x * y;
    cout<<"Your salary is: "<<x<<". After interest your salary is: "<<z<<endl;
}

int stol(int const *p);//  const arguments..

int main()
{
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a >>b;

    subtraction(a,b);// Here inline function  is used
    subtraction(a,b);
    subtraction(a,b);
    subtraction(a,b);

    int money = 100;
    salary(money);// Default arguments   
    
    cout<<"For vip: "<<endl;
    salary(money, 10.10); // We can pass arguments line this "(money, 10.10)"

    return 0;
}