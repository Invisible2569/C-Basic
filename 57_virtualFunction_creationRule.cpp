#include<iostream>
#include<cstring>
using namespace std;

/*
    -->Rules for virtual functions
    -->They cannot be static
    -->They are accessed by object pointers..............
    -->Virtual functions can be a friend of another class
    -->A virtual function in the base class might not be used.
    -->If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/

class VT
{
    protected:
        string title;
        float rating;
    public:
        VT(string s, float r)
        {
            title = s;
            rating = r;
        }
        virtual void display()
        {
            cout<<"VT"<<endl;
        }
};

class V : public VT
{
    protected:
        int v_length;
    public:
        V(string s, float r, int vl) : VT(s, r)
        {
            v_length = vl;
        }
        // void display() -------> proved "5_number points".......
        // {
        //     cout<<"The name of this video is: "<<title<<endl
        //     <<"The rating of this video is: "<<rating<<endl
        //     <<"The video length is: "<<v_length<<endl;
        // }    
};

class T : public VT
{
    protected:
        int words;
    public:
        T(string s, float r, int w): VT(s, r)
        {
            words = w;
        }
        void display()
        {
            cout<<"The topic title is: "<<title<<endl
            <<"Rating of this title is: "<<rating<<endl
            <<"There have "<<words<<" words"<<endl;
        }    
};

int main()
{
    string title;
    float rating;
    int vlen, words;

    title = "Coding video"; rating = 4.5; vlen = 7;
    V code_video(title, rating, vlen);
    // code_video.display();

    title = "Text code"; rating = 3.9; words = 777;
    T text_code(title, rating, words);\
    // text_code.display();

    VT *dis[2];

    dis[0] = & code_video;
    dis[1] = & text_code;

    dis[0]->display();
    dis[1]->display();


    // VT *disco;
    // disco = & code_video;
    // disco = & text_code;        ---> run then watch

    // disco->display();
    // disco->display();
    return 0;
}