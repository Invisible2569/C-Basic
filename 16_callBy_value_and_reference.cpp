#include<iostream>
using namespace std;

void swap(int x , int y)// Like "two people" use same type of thing, so if one change something, then other one can not be change..
{                 // temp "x" "y"
    int temp = x; //  x    x   y
    x = y;        //  x    y   y
    y = temp;     //  x    y   x

    cout<<"Swaping a = "<<x<<" and b = "<<y<<endl;//That's swap working in this function not main_function
}
 
void swap_pointer( int *x, int *y)// Like, "One account" use two people..
{
    int temp = *x;
    *x = *y;        
    *y = temp;
}

void swap_reference_var(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int & return_by_reference(int &x, int &y);

int main()
{
    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    swap(a,b);//---That's not working for swap in main_function,,because these allocate different place
    cout<<"Now (swap_function) not working so, a = "<< a <<" and b = "<<b<<endl;

    swap_pointer(&a, &b);//-->That's working, because we working with memory address.. And the memory allocate same place..
    cout<<"Now (swap_pointer fun) working so, a = "<< a <<" and b = "<<b<<endl;
    
    swap_reference_var(a, b);//Here "x" pointing "a" memory and "y" pointing "b" memory like pointer...
    cout<<"Swaping by Reference_variable, so now a =: "<<a<<" and b =: "<<b<<endl;

    /*The changes made in the swap function reflect in the main function,
     because references_variable refer to the same memory 
     locations as the original variables.
     */ 

    return_by_reference(a, b) = 777;
    cout<<"Swaping by return_by_Reference, so now a =: "<<a<<" and b =: "<<b<<endl;

    return 0;
}

int & return_by_reference(int &x, int &y)// Here "&" meaning i return a "reference_variable_data(like a->x)"
{
    int temp = x;  
    x = y;
    y = temp;
    return x;
}