#include<iostream>
using namespace std;

class Shop_item
{
    int item_id;
    float price;
    public:
        void set_data()
        {
            cout<<"Enter item id: ";
            cin>>item_id;
            cout<<"Enter price: ";
            cin>>price;
        }
        void display()
        {
            cout<<"Product item_id is: "<<item_id<<endl
            <<"Product price is: "<<price<<endl;
        }
};


int main()
{
    int n = 3;
    Shop_item *ptr = new Shop_item[n];


    for (int i = 0; i < n; i++)
    {
        cout<<"Entered item: ("<<(i+1)<<")"<<endl;
        ptr->set_data();
        ptr->display();
    }
    
    return 0;
}