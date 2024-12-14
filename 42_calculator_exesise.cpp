#include<iostream>
#include<cmath>

using namespace std;

class Simple_Calculator
{
    protected:
        int a, b;
        char opr;
    public:

        void si_set()
        {
            cout << "Enter first number: ";
            cin >> a;
            
            cout << "Enter operator: ";
            cin >> opr;

            cout << "Enter second number: ";
            cin >> b;
        }
        
        void si_calculate()
        {
            switch (opr)
            {
                case '+':
                    cout << "The addition of a + b is: " << a + b << endl;
                    break;
                case '-':
                    cout << "The subtraction of a - b is: " << a - b << endl;
                    break;
                case '*':
                    cout << "The multiplication of a * b is: " << a * b << endl;
                    break;
                case '/':
                    if (b == 0)
                    {
                        cout << "∞" << endl;
                    }
                    else
                    {
                        cout << "The division of a / b is: " << a / b << endl;
                    }
                    break;
                case '%':
                    if (b == 0)
                    {
                        cout << "∞" << endl;
                    }
                    else
                    {
                        cout << "The remainder of a % b is: " << a % b << endl;
                    }
                    break;
                default:
                    cout << "----> No valid operator found <----" << endl;
                    break;
            }
        }
};

class Scientific_Calculator
{
    protected:
        int a, b;
        string trigo_functions;
    
    public:
        void sc_set()
        {
            cout<<"Enter first value: ";
            cin>>a;

            cout<<"Enter trigonometric function: ";
            cin>>trigo_functions;

            cout<<"Enter second number: ";
            cin>>b;
        }

        void sc_calculate()
        {
            // if("sin" == trigo_functions || "cos"==trigo_functions)
            // {
            //     cout<<"The sum of those two ange is: "<<sin(a) + cos(b)<<endl;
            // }
           if("sin" == trigo_functions)
           {
                cout<<"The sine of angel is: "<<sin(a)<<endl;
           }
           if("root" == trigo_functions)
           {
                cout<<"The root of b is: "<<sqrt(b)<<endl;
           }
           if("^" == trigo_functions)
           {
                cout<<"The sum square a and b is: "<< pow((a+b), 2);
           }
           if("log" == trigo_functions)
           {
                if( a == 0) cout<<"Infinity"<<endl;

                else 
                cout<<"The logarithm of a is: "<<log10(a)<<endl;
           }
           else
           {
                cout<<"Not available"<<endl;
           }
        }
};

class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator
{
    protected:
         int choice;
    public:
        void run()
        {
            cout<<"1. Simple"<<endl;
            cout<<"2. Science"<<endl;

            cout<<"Enter your choice: ";
            cin>>choice;

            if(choice == 1)
            {
                si_set();
                si_calculate();
            }
            else if (choice == 2)
            {
                sc_set();
                sc_calculate();
            }
            else
            {
                cout<<"-------->Error<---------"<<endl;
            }
        }     
};

int main()
{
    Hybrid_Calculator calculate;
    calculate.run();
}
