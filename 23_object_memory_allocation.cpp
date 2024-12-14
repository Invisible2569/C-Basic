#include<iostream>
using namespace std;

class Shop
{
    int item_id[10];
    int item_price[10];
    int count=1;      //----> Here, count_variable = 0, initialize for every each "object"

    public:
        // void product_count()
        // {
        //     count = 0; 
        // }
        void set_id_price();
        void display();
};

void Shop :: set_id_price()
{
    cout<<"Enter id and price of your "<< count <<" number product :"<<endl;
    
    cout<<"Enter the id of this item: ";
    cin>>item_id[count]; 
    cout<<"Enter the price of this item: ";
    cin>>item_price[count]; 

    count++; 
}

void Shop :: display()
{
    for (int i = 1; i <= count; i++) 
    {
        cout<<"The item id is: "<< item_id[i] <<" and the item price is: "<< item_price[i] <<endl;
    }   
}

int main()   
{
    int n;
    cout<<"Enter how many product you add in this store: "<<endl;
    cin>>n;
    
    Shop store;

    // store.product_count(); // that initialize count = 0 ....

    for (int i = 1; i <= n; i++)
    {
        store.set_id_price();
        store.display();
    }
    
    // store.set_id_price();
    // store.set_id_price();
    // store.set_id_price();

    // store.display();

    Shop st;
    st.set_id_price();
    st.set_id_price();
    st.display();

    return 0;
}
