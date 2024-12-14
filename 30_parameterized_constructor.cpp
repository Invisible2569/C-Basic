#include<iostream>
#include<cmath>

using namespace std;

class Point
{
    int a, b;

    public:
        friend void distance(Point r, Point s);

        Point(int x, int y)//---->"parameterized_constructor"....
        {
            cout<<"Enter first digit: ";
            cin>>x;
            a = x;
            
            cout<<"Enter second digit: ";
            cin>>y;
            b = y;

            cout<<"The point is: ("<<a<<","<<b<<")"<<endl;  
        }

        // Point()
        // {
        //     cout<<"The point is: ("<<a<<","<<b<<")"<<endl;
        // }
};

void distance(Point r, Point s)
{
    cout<<"The distance of those two point is: "<<sqrt(((r.a - s.a)*(r.a - s.a)) + ((r.b -s.b)*(r.b-s.b)));

    // or......

    cout<<"\nThe distance of those two point is: "<<sqrt(pow(r.a - s.a, 2) + pow(r.b - s.b, 2));//--> "2 show "power""
    
    float root = sqrt(49);
    cout<<"\nRooted number is: "<<root<<endl;

    int power = pow(5, 3);
    cout<<"Powered number is: "<<power<<endl;  
}

int main()
{
    Point p1(0,0);//--->What a miracle....run it and see it....hahahaha...
    // Point print();---------> Working but give warning...

    Point p2(0,0);
    // Point print();   


    distance(p1, p2);

    return 0;
}