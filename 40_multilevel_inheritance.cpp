#include<iostream>
using namespace std;
 
class Student
{
    protected:
        int roll;
    public:
        void set_roll();
        void roll_display();    
};
void Student :: set_roll()
{
    cout<<"Enter roll number: ";
    cin>>roll;
}
void Student :: roll_display()
{
    cout<<"The roll number is: "<<endl;
}

class Exam : public Student
{
    protected:
        float physics;
        float maths;
    public:
        void set_mark();
        void display_mark();    
};
void Exam :: set_mark()
{
    cout<<"Enter physics mark: ";
    cin>>physics;
    cout<<"Enter maths mark: ";
    cin>>maths;
}
void Exam ::display_mark()
{
    cout<<"Your physics mark is: "<<physics
    <<" and you maths mark is: "<<maths<<endl;
}


class Result : public Exam
{
        float percentage;
    public:
        void display()
        {
            set_roll();
            roll_display();//make it easier...

            set_mark();
            display_mark();

            cout<<"Your percentage is: "<<(physics + maths)/2<<"%"<<endl;
        }
};
int main()
{
    Result r1; 
    // r1.set_roll();
    // r1.set_mark(); 
    r1.display(); 

    return 0;
}