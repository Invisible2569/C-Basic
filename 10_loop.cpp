#include<iostream>
using namespace std;

int main()
{
    //------>For Loop....

    int count;
    cout<<"How many times you need: "<<endl;
    cin>>count;
    for (int i = 1; i <= count; i++)
    {
        cout<<"Fly like Eagle: "<< i <<" times"<<endl;
    }

    //------>While loop....
    int i=1;
    while(i<=count)
    {
        cout<<"Astagfirullah "<< i << " times"<<endl;
        i++;
    }

    //------->Do__While...
    do
    {
        cout<<"I can push up "<< i << " times"<<endl;  
        i++;
    }while(false);

    //---Multiplication by D0-While...
    int j =1;
    int n;
    cout<<"Enter you digit: "<<endl;
    cin>>n;
    do 
    {
        cout<< n <<" * " << j << ": "<<n * j <<endl;
        j++;
    }while(j<=10);
    
    return 0;
}