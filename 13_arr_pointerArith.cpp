#include<iostream>
using namespace std;
 
int main()
{
    //----->Array........
    int n;
    cout<<"How many number you need: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter your numbers: "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Changing a position number: "<<endl;
    arr[2] = 777;

    cout<<"Your number is: ";
    for (int i = 1; i <= n; i++)
    {
        cout<<" "<<arr[i]<<endl;
    }

    //----->Pointer arithmatic.......
    //int *p = &arr[n];
    int *p = arr;            //--Giving arr[1 or 0]....in *p

    for (int i = 1; i <= n; i++)
    {  
        cout<<"Array value at ["<<i<<"] :" <<*(p+i)<<endl;
    }

    int *R= &arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout<<"Increasing array value by pointer,,,, at ["<<i<<"] :"<<*R+i<<endl;
    }
    
    return 0;
}