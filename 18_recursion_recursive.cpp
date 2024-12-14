#include<iostream>
using namespace std;
 
int factorial(int n)
{
    // n! = n * (n-1)!
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
    // 4 * factorial( 4-1 )
    // 4 * 3 * factorial( 3-1 )
    // 4* 3 * 2 * factorial( 2-1 )
    // 4 * 3 * 2 * 1

    // n! = n * (n-1)!
}

int fibonacci(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibonacci(n-1)+ fibonacci(n-2);
}

int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is: "<<factorial(n)<<endl;

    cout<<"The fibonacci sequence of "<<n<<" is: "<<fibonacci(n)<<endl;

    return 0;
}   