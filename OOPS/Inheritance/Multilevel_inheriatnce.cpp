#include <bits/stdc++.h>
using namespace std;
class person{
    public:
        string name;
        int age;
        person(){
            cout<<"I am person constructor"<<endl;
        }
};
class student : public person {
    public: 
        int rollno;
        student(){
            cout<<"I am student constructor"<<endl;
        }
};
class graduate : public student{
    public:
        string research;
        graduate(){
            cout<<"I am graduate constructor"<<endl;
        }
};
int main(){
    graduate g1;
    g1.name="Jainam";
    g1.rollno=68;
    g1.research="AIML";
    cout<<g1.name<<endl;
    cout<<g1.rollno<<endl;
    cout<<g1.research<<endl;
    return 0;
}

// parent - > parent - >  child