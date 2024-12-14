// #include<iostream>
// #include<string>
// using namespace std;

// class Binary
// {
//     // private:  .....>by default class member are "private"
//         string s;

//     public:
//         void read();
//         void check_binary();
//         void ones_completions();
//         void display();
// };

// void Binary :: read()
// {
//     cout<<"Enter a binary number: "<<endl;
//     cin>>s;
// }

// void Binary:: check_binary()
// {
//     for (int i = 0; i <s.length(); i++)
//     {
//         if(s.at(i)!='0' && s.at(i)!='1')
//         {
//             cout<<"That's not binary."<<endl;
//             exit(0);
//         }
//     }  
// }

// void Binary :: ones_completions()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i)=='0')
//         {
//             s.at(i)='1';
//         }
//         else
//         {
//             s.at(i)='0';
//         }       
//     }   
// }

// void Binary::display()
// {
//     cout<<"The binary is: "<<s<<endl;
// }

// int main()
// {
//     Binary n;
//     n.read();
//     n.check_binary();
//     n.display();
//     n.ones_compliment's();
//     n.display();

//     return 0;
// }



#include<iostream>
#include<string>
using namespace std;

class Sentence
{
        string s;
        int a_count = 0; 
        int e_count = 0;
        int i_count = 0; 
        int o_count = 0; 
        int u_count = 0;

    // int a_count, e_count, i_count , o_count ,u_count =0;
    // a_count = e_count= i_count = o_count= u_count =0;    ...--> That's not possible in "class"...
     
    public:
        // Sentence() : a_count(0), e_count(0), i_count(0), o_count(0), u_count(0) {},,,   ///--> but we cal do like this..
        void read();
        void vowel_check();
        void display();
};

void Sentence :: read()
{
    cout<<"Enter a sentence: "<<endl;
    // cin>>s;
    getline(cin,s);//--> This reads the "entire" sentence including "spaces"
}

void Sentence:: vowel_check()
{
    for (int i = 0; i < s.length(); i++)
    {       
        if(s.at(i)=='A' || s.at(i)=='a')
        {
            a_count++;
        }
           
        else if(s.at(i)=='E' || s.at(i)=='e')
        {
            e_count++;
        }
        
        else if(s.at(i)=='I' || s.at(i)=='i')
        {
            i_count++;
        }

        else if(s.at(i)=='O' || s.at(i)=='o')
        {
            o_count++;
        }

        else if(s.at(i)=='U' || s.at(i)=='u')
        {
            u_count++;
        }
    }    
    
    
}

void Sentence :: display()
{
    cout<<"The sentence is :"<<s<<endl;
    
    cout<<"'A' vowel found: "<<a_count<<" times"<<endl;
    cout<<"'E' vowel found: "<<e_count<<" times"<<endl;
    cout<<"'I' vowel found: "<<i_count<<" times"<<endl;
    cout<<"'O' vowel found: "<<o_count<<" times"<<endl;
    cout<<"'U' vowel found: "<<u_count<<" times"<<endl;
}

int main()
{
    Sentence ss;
    ss.read();
    ss.vowel_check();
    ss.display();

    return 0;
}
   
