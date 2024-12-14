#include<iostream>
using namespace std;
 
int main()
{
    int a = 77;
    int *ptr = &a;
    *ptr = 69;
    cout<<"The a is: "<<*ptr<<endl;

    // New_keyword

    int *p = new int (69);
    cout<<"The address of p value is: "<<*p<<endl;

    int n;
    cout<<"Enter all number you have: ";
    cin>>n;

    int *pn = new int[n];/* Dynamic Memory Allocation: This process allows memory to be allocated at runtime 
    (while the program is running), which is useful when the size of data is not known in advance.*/
    for (int i = 1; i <= n; i++)
    {
        cin>> pn[i];
    }

    pn[1] = 6969;
    *(pn+2) = 7725;

    for (int i = 1; i <= n; i++)
    {
        cout<< pn[i]<<" ";
    }
    cout<<endl;
    


    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    //...................Delete_keyword...
    // delete arr;
    delete[] arr;//---------> deleting all allocated memory..
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    
    return 0;
}