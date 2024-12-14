#include<iostream>
using namespace std;

class student
{
    protected:
        int roll;
    public:
        void set_roll()
        {
            cout<<"Enter your roll number: ";
            cin>>roll;
        }
        void get_roll()
        {
            cout<<"Your roll number is: "<<roll<<endl;
        }
};

class test : virtual public student //==> virtual means on here "virtual_class member inherit only one_time"
{
    protected:
        float math;
        float physics;
    public:
        void set_mark()
        {
            cout<<"Enter math marks: ";
            cin>>math;
            cout<<"Enter physics mark: ";
            cin>>physics;
        } 
        void get_mark() 
        {
            cout<<"Your mark is: "<<endl
            <<"Math: "<<math<<endl
            <<"Physics: "<<physics<<endl;
        }  
};

class sport : virtual public student
{
    protected:
        float score;
    public: 
        void set_score()
        {
            cout<<"Enter student PT score: ";
            cin>>score;
        }
        void get_score()
        {
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class result : public test, public sport
{
    private:
        float total_score;
    public:
        void display()
        {
            set_roll();
            set_mark();
            set_score();

            get_roll();
            get_mark();
            get_score();

            total_score = math + physics + score;
            cout<<"Your total score is: "<<total_score<<endl;
        }
};

int main()
{
    result s1;
    s1.display();
    return 0;
}