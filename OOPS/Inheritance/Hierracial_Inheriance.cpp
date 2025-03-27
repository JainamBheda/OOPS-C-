#include <bits/stdc++.h>
using namespace std;
//hierrcial Inheritance
class person{
    public:
        string name;
};
class student : public person{
    public:
        int rollno;
};
class teacher : public person{
    public:
        string subject;
        double salary;
};

int main(){
    
    teacher t;
    t.name="Jainam";
    t.subject="Bio";
    cout<<t.name<<endl;
    cout<<t.subject<<endl;
    return 0;
}

// parent1->child1 AND parent1->child2