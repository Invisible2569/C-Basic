#include<iostream>
using namespace std;

class Deposit
{
    int principle;
    int year;
    float interest_rate;
    int outcome;

    public:
        Deposit() {} // Default constructor
        Deposit(int p, int y, int ir);
        Deposit(int p, int y, float IR);

        void display();
};

Deposit::Deposit(int p, int y, int ir)
{
    principle = p;
    year = y;
    interest_rate = float(ir) / 100;
    outcome = principle;

    for (int i = 1; i <= year; i++)
    {
        outcome = outcome * (1+interest_rate);
    }
}

Deposit::Deposit(int p, int y, float IR)
{
    principle = p;
    year = y;
    interest_rate = IR;
    outcome = principle;

    for (int i = 1; i <= year; i++)
    {
        outcome = outcome * (1+interest_rate);
    }
}

void Deposit::display()
{
    cout << endl << "Principal amount was " << principle
         << ". Return value after " << year
         << " years is " << outcome << endl;
}

int main()
{
    int p, y, ir;
    float IR;

    cout << "Enter the principal amount: ";
    cin >> p;

    cout << "Enter year: ";
    cin >> y;

    cout << "Enter the interest rate (as integer): ";
    cin >> ir;

    cout << "Enter the interest rate (as float): ";
    cin >> IR;

    Deposit d1;//------If we don't make "default_constructor", then we can not use it like this..
    d1 = Deposit(p, y, ir);//------> Here, "Object = Object"
    d1.display();

    Deposit d2(p, y, IR);// Different types of Constructor calling rule......
    d2.display();

    Deposit D_7 = Deposit(p, y, ir);
    D_7.display();

    return 0;  
}

