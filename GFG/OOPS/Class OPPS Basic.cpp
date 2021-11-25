#include <bits/stdc++.h>
using namespace std;

class student{
    public:
        int age;
        string name;

        //Put Data By Member Function
        void putdata(string s,int a)
        {
            age = a;
            name = s;
        }

        //Get data by Member Function
        void getdata()
        {
            cout<<"Name = "<<name<<endl;
            cout<<"Age = "<<age<<endl;
        }

        //Operator Overloading
        bool operator ==(student &a){
            if(name == a.name && age == a.age)
                return true;
            return false;
        }
        //Parameterise Constructor
        student(string s,int a){
            cout<<"Parameterise Constructor"<<endl;
            name = s;
            age = a;
        }

        //Default Constructor
        student(){
            cout<<"Default Constructor"<<endl;
        }

        //Copy Constructor
        student(student &a){
            cout<<"Copy Constructor"<<endl;
            name = a.name;
            age = a.age;
        }

        //Distructor
        ~student(){
            cout<<"Distructor"<<endl;
        }
};


int main() 
{
    #ifndef Online_Judge
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        
    int t=1;
    cin>>t;
    while(t--){
        
        student s[2];

        for(int i=0;i<2;i++){
            string name;
            int age;
            cin>>name>>age;
            s[i].putdata(name,age);
        }
        for(int i=0;i<2;i++){
            s[i].getdata();
        }
        //Input Check
        cout<<"Input are ";
        if(s[0]==s[1])
            cout<<"Same"<<endl;
        else
            cout<<"Not Same"<<endl;

        student a("kiran",19);
        student b = a;
        student c;
        
    }
    return 0;
}