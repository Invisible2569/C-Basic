#include<iostream>
#include<cstring>
using namespace std;

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
        virtual void display() = 0; // -->It's means "do_nothing_function"......or Pure_virtual_function...
        //-----> if i make pure_virtual_function,,,,then i nedd to create this overloading_function in another class for access..
        // {
        //     cout<<"VT"<<endl;
        // }
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
        void display()
        {
            cout<<"The name of this video is: "<<title<<endl
            <<"The rating of this video is: "<<rating<<endl
            <<"The video length is: "<<v_length<<endl;
        }    
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

    return 0;
}