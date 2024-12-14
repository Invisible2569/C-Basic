#include<iostream>
using namespace std;
 
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        cout<<i<<endl;

        if(i==4)
        {
            break;
        }
    }

    for (int i = 101; i <= 107; i++)
    {
        if (i==104)
        {
            continue;
        }
        cout<<i<<endl;  
    }

    for (int i = 201; i <= 207; i++)
    {
        if (i==204)
        {
            break;
        }
        cout<<i<<endl;  
    }
    
    
    return 0; 
}
